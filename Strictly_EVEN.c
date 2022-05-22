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
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0 && i%2!=0)
        {
            s=0;
            break;
        }
        else if(arr[i]%2==0 && i%2==0)
        {
            s=1;
        }
    }
    if(s==1) printf("True");
    else printf("False");

}