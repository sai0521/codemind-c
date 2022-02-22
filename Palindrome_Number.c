#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],m,i,rev,temp;
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=0 ; i<n ; i++)
    {
        temp=arr[i];
        rev=0;
        while(arr[i]>0)
        {
            m=arr[i]%10;
            arr[i]=arr[i]/10;
            rev=rev*10+m;
        }
        if(rev==temp)
        {
            printf("True
");
            
        }
        else
        {
            printf("False
");
        }
    }
}