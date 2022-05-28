#include<stdio.h>
int main()
{
    int n,i,c,a=0,j,c1=0,s=0;
    float r;
    scanf("%d",&n);
    int arr[100];
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
            s=s+arr[i];
            c1++;
        }
    }
    if(c1==0)
    {
        printf("-1");
    }
    else
    {
    r=float(s)/c1;
    printf("%.2f",r);
    }
}