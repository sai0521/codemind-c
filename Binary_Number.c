#include<stdio.h>
#include<math.h>
void bin(int *arr,int x)
{
    int r,i=0;
    while(x)
    {
        r=x%2;
        x=x/2;
        arr[i++]=r;
    }
}
int main()
{
    int n,i,x;
    scanf("%d",&n);
    int r,s,j,k;
    s=pow(2,n);
    for(i=0;i<s;i++)
    {
        int arr[n];
        for(j=0;j<n;j++)
        {
            arr[j]=0;
        }
        bin(arr,i);
        for(j=n-1;j>=0;j--)
        {
            printf("%d",arr[j]);
        }
        printf("
");
    }
}