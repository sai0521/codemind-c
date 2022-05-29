#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int arr[n],brr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    int k=0,a,b;
    a=0;
    b=n-1;
    for(i=0;i<n/2;i++)
    {
        brr[k++]=arr[a];
        brr[k++]=arr[b];
        a++;
        b--;
    }
    if(k!=n)
    {
        brr[k++]=arr[(n/2)];
    }
    if(k%2!=0)
    {
        brr[k++]=0;
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",brr[i]);
    }
    
}