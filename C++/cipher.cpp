 #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
       int n,i,t;
       cin>>t;
       while(t--){
       cin>>n;
        vector<int> a(n);
        for( i=0;i<n;i++) { cin>>a[i];}
       int max=a[0];
//Processing from back to front
        for( i=n-1;i>0;i--) {
           a[i]=a[i]-a[i-1];
    //If the next number is greater than the previous number, then all the following numbers are reduced to equal to the previous numbe 
     //If the next number is lesser than the previous number, then we add the difference to max. 
          if(a[i]<0){
               max+=a[i];
            }
        }
       for( i=0;i<n;i++) {
           cout<<a[i]<<" ";
           }
       if(max>=0) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       }
    }


