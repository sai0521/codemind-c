#include<stdio.h>
#include<math.h>
int happy(int n)
{
    int m,s=0;
    while(n>0)
    {
        m=n%10;
        n=n/10;
        s=s+pow(m,2);
    }
    if(s<=9)
    {
        return s;
    }
    else
    {
        return happy(s);
    }
}
int main()
{
    int n,m;
    scanf("%d",&n);
    m=happy(n);
    if(m==1 || m==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}