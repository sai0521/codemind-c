#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return n;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,m,i,c=0,flag=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            m=prime(i);
            if(m==2 ||m==3 || m==5 ||m==0)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }
    }
    if(flag==1)
    {
        printf("Ugly Number");
    }
    else
    {
        printf("Not Ugly Number");
    }
    
}