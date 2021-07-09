#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int subarraySum(int arr[],int n,int s){
    int st=0,en=0,i=0,j=0,sum=0;
    while(j<n && sum+arr[j]<=s)
    {   sum+=arr[j];
        j++;
    }
    if(sum==s)
    {
        cout<<"The given sym is found between index "<<i+1<<" and "<<j+1<<endl;
        return 0;   
    }
    while(j<n){
        sum+=arr[j];
        while(sum>s)
        {
            sum-=arr[i];
            i++;
        }
        if(sum==s)
        {
            st=i+1;
            en=j+1;
            cout<<"The given sym is found between index "<<st<<" and "<<en<<endl;
            return 0;
        }
        j++;
        
    }
    return 0;
}
int main()
{
    int n,i,j,s;
    int a[100];
    cout<<"Enter the nimber of elements you want"<<endl;
    cin>>n;
    cout<<"Enter the Array"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The Given Array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the Sum Required"<<endl;
    cin>>s;
    subarraySum(a,n,s);
}