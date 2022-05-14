#include<stdio.h>
int main()
{
    int n,i,f=0;
    scanf("%d",&n);
    for(i=1;i<n/2;i++)
    {
        if(i*(i+1)==n)
        {
            f=1;
        }
    }
    if(f==1) printf("YES");
    else printf("NO");
}