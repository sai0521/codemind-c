#include<stdio.h>
int fact(int n)
{
    int m=1,i;
    for(i=n;i>=1;i--)
    {
        m=m*i;
    }
    return m;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d
",fact(arr[i]));
    }
}