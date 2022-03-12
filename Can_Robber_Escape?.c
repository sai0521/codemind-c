#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n],flag=0;
    for(i=0 ; i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0 ; i<n; i++)
    {
        if(n<=arr[i])
        {
            flag=1;
            break;
            
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1) printf("NO");
    else printf("YES");
}