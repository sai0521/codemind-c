#include<stdio.h>
int main()
{
    int s,t,b,k,tc;
    scanf("%d%d%d",&t,&s,&b);
    k=2*t*s*b*512;
    tc=k/1024;
    printf("%dKB",tc);
}