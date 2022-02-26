#include<stdio.h>
int main()
{
    int n,i,c=0,c1=0;
    scanf("%d",&n);
    int arr[n],m;
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0 ;i<n ;i++)
    {
        c=0;
        while(arr[i]>0)
        {
            m=arr[i]%10;
            arr[i]=arr[i]/10;
            c++;
        }
        if(c%2==0)
        {
            c1++;
        }
    }
    printf("%d",c1);
}