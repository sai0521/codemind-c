#include<stdio.h>
int main()
{
    int n,i,j,a=0,c,max,min;
    scanf("%d",&n);
    int arr[n],brr[100],k=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++)
    {
        c=arr[i];
        a=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                a++;
                if(i!=j)
                {
                    arr[j]=-1000;
                }
            }
        }
        if(c==a && arr[i]!=-1000)
        {
            brr[k++]=arr[i];
        }
    }
    if(k==0)
    {
        printf("-1");
    }
    else
    {
        max=brr[0];
    min=brr[0];
    for(i=0;i<k;i++)
    {
        if(brr[i]>max)
        {
            max=brr[i];
        }
        if(brr[i]<min)
        {
            min=brr[i];
        }
    }
    printf("%d %d",min,max);
    }
}