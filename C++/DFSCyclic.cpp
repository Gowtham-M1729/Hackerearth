#include<stdio.h>
#include<string.h>
#include<math.h>
struct node
{
    int u,v,pre;
} p[200005];
int book[200005],ans;
int find(int x)
{
    return x==p[x].pre?x:find(p[x].pre);
}
void join(int p1,int p2)
{
    int r1,r2;
    r1=find(p1);
    r2=find(p2);
    if(r1!=r2)
            p[r2].pre=r1;
    else ans++;
}
int main()
{
    int m,n;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        p[i].pre=i;
    memset(book,0,sizeof(book));
    ans=0;
    for(int i=1; i<=m; i++)
    {
        scanf("%d%d",&p[i].u,&p[i].v);
        book[p[i].u]++,book[p[i].v]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(book[p[i].u]==2&&book[p[i].v]==2)
            join(p[i].u,p[i].v);
    }
    printf("%d\n",ans);
    return 0;
}
