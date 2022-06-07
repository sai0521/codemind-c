#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        int n,e=0,d=1;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int mid=n/2;
        if(n%2==0)
        {
            for(int i=0;i<n/2;i++)
            {
                if(i<mid-1)
                printf("%d %d ",a[n-1-i],a[i]);
                else
                printf("%d %d",a[n-1-i],a[i]);
            }
        }
        else
        {
            for(int i=0;i<n/2;i++)
            {
                printf("%d %d ",a[n-1-i],a[i]);
            }
                printf("%d",a[mid]);
        }
        printf("
");
    }
    return 0;
}