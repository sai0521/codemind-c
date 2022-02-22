#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int arr1[n],arr2[i];
    for(i=0 ; i<n ; i++)
    {
        scanf("%d %d",&arr1[i],&arr2[i]);
    }
    for(i=0 ;i<n ;i++)
    {
        sum=arr1[i]+arr2[i];
        printf("%d
",sum);
    }
}