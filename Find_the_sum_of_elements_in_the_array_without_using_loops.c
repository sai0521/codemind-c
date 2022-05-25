#include<stdio.h>
int add(int *arr,int n)
{
    static int s=0,i=0;
    s=s+arr[i++];
    if(i<n)
    {
        return add(arr,n);
        
    }
    return s;
}
int main()
{
    int n,i,s;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    s=add(arr,n);
    printf("%d",s);
}