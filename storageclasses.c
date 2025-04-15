#include<stdio.h>
int auto(void);
int regi(void);
int sta(void);
int gol(void);
extern int x=60;
int main()
{
    int k,l,m,o;
    printf("Enter the value for auto function:")
    scanf("%d",&k);
    auto(k);
    printf("Enter the value for register function:")
    scanf("%d",&l);
    regi(l);
    printf("Enter the value for static function:")
    scanf("%d",&m);
    sta(m);
   // printf("Enter the value for golabl function:")
    //scanf("%d",&o);
    return 0;
}
int auto(void)
{
    auto int a;
    printf("%d",a++);
    printf("%d",++a);
    return 0;
}
int regi(void)
{
    register int n;
    printf("%d",n--);
    printf("%d",--n);
    return 0;
}
int sta(void)
{
    static int x;
    printf("%d",++x + x++);
    return 0;
}
int gol(void)
{
    printf("%d",--x + x--);
    return 0;
}
