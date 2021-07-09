#include<stdio.h>
#include<string.h>
void main()
{ int i,j,k,n,b,c,d=0,m=0,r,p,l;
  static char s[100],a[100];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&k);
        for(j=1,r=0,s[0]='\0';j<=k;j++)
           { scanf("%d",&p);
              for(b=3,m=0,d=0;b<=p;b=b+2)
                { for(c=2;c<=b/2;c++)
                    { if(b%c==0) 
                      {  m=1;
                        break;
                      }
                    }
                    if(m==0)
                     {  d++;
                        m=0;
                       
                     }
                   m=0;
                }
               sprintf(a,"%d",d+1);
               strcat(s,a);
               l=strlen(s);
           }
        puts(s);
        for(b=l-2;b>=0;b--)
           { if(s[l-1]>s[b])
               {     s[l-1] = s[l-1] ^ s[b]; 
                     s[b] = s[l-1] ^ s[b];  
                     s[l-1] = s[l-1] ^s[b];
                     break;
               }
           }
        for(c=l-2;c>=b;c--)
           { if(s[l-1]<s[c])
               {     s[l-1] = s[l-1] ^ s[c]; 
                     s[c] = s[l-1] ^ s[c];  
                     s[l-1] = s[l-1] ^s[c];
                     break;
               }
           }
                puts(s);       
            
      }
}
