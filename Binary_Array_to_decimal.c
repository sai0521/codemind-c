#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c,s=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    c=n;
    for(i=0;i<n;i++)
    {
        c--;
        if(arr[i]==1)
        {
            s=s+pow(2,c);
        }
    }
    printf("%d",s);
}