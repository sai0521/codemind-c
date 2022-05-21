#include<stdio.h>
int main()
{
    int n,i,a,b,max=0,c=0;
    scanf("%d",&n);
    int arr[n],brr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            continue;
        }
        else
        {
            if(max<arr[i])
            {
                c++;
                max=arr[i];
            }
        }
    }
   if(c==0)
   {
       printf("-1");
       
   }
   else
   {
       printf("%d",max);
   }
    
}