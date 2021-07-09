#include<bits/stdc++.h>
using namespace std;
int main()
{


        int n;
        cout<<"Enter the value of n : ";
    cin>>n;
    char str[n];
    cout<<"Enter the string of length "<<n<<" : ";
    cin>>str;
    stack<char>s1;
    stack<char>s2;
    s1.push('\0');
    for(int i=0;i<n;i++)
    {
     if(str[i]==s1.top())
     s1.pop();
     else
     s1.push(str[i]);
    }
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    s2.pop();
    while(!s2.empty())
    {
        cout<<s2.top();
        s2.pop();
    }
    cout<<endl;
cout<<"Press enter to exit\n";
    char ch=getchar();
char ch1=getchar();
                                                                                                                            1,1           Top
    return 0;
}
                  
