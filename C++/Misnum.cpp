#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,k,j,input;
    static int c[100000];
    cin>>n;
    vector<int>a;
    vector<int>b;
    for(int i=0;i<n;i++)
    {
        cin >> input;
        a.push_back(input);
        c[a[i]]++;
        
    }
    cin>>k;
    for(j=0;j<k;j++)
    {
      cin >> input;
     b.push_back(input); 
          
    }
    for(j=0;j<k;j++){
       if(c[b[j]]<0)
        continue;
        else
        c[a[j]]--;
        //cout<<c[b[j]]<<" ";
       if(c[a[j]]<0)
          cout<<b[j]<<" ";
    }
}
