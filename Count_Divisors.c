#include<stdio.h>
int main()
{
    int i,r,k,c=0;
    scanf("%d %d %d",&i,&r,&k);
    for(i; i<=r ; i++)
    {
        if(i%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
}