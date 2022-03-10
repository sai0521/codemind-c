#include<stdio.h>
int main()
{
    int l,b,w,c,a,cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if(l<=w+w || b<=w+w)
    {
        printf("Impossible");
    }
    else
    {
        a=l*b-((l-2*w)*(b-2*w));
        cost=a*c;
        printf("%d",cost);
    }
}