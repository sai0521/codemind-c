#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    int res=0,sum=0;
    for(i=0;i<n;i++)
    {
        sum=0;
        for (j=i; j<n; j++){
            sum+=arr[j];
            if (sum==m){
                res++;
            }
        }
    }
    printf("%d",res);
}