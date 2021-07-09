#include<stdio.h>
void main()
{
int a;
int b=2;
int t;
char d='*';
printf("enter a character"); 
scanf("%c",&d);
for(b=1;b<20;b++)
{
for(t=20-b;t>=0;t--)
{
printf(" ");
}
printf(" ");
for(a=1;a<b;a++)
{
printf("(");
printf("%c",d);
printf(")");
}
printf("\n");
}

for(b=2;b<20;b++)
{
for(t=0;t<b+1;t++)
{
printf(" ");
}
printf(" ");
for(a=20-b;a>1;a--)
{
printf("(");
printf("%c",d);
printf(")");
}
printf("\n");
}
}



