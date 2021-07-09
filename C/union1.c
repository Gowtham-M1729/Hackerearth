#include <stdio.h>
union item{
    int x;
    double y;
    char ch;
};
int main( )
{
    union item it;
    it.y = 20.2;
    it.x = 12;
    it.ch = 'a';
    printf("%d %ld\n", it.x,sizeof(it.x));
    printf("%f %ld\n", it.y,sizeof(it.y));
    printf("%c %ld %ld\n", it.ch,sizeof(it.x),sizeof("abcd"));
   return 0;
}
