#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k=0,j,c=0,r=0,m;
    scanf("%d",&n);
    int arr[100];
    while(n>0)
    {
        m=n%10;
        n=n/10;
        r=r*10+m;
    }
    while(r>0)
    {
        j=r%10;
        r=r/10;
        arr[k++]=j;;
    }
    for(i=0;i<k;i++)
    {
        if(arr[i]==6)
        {
            arr[i]=9;
            break;
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d",arr[i]);
    }

    
}