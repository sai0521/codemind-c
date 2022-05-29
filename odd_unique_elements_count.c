#include<stdio.h>
int main()
{
    int n,i,j,k,c,s=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        if(i==n)
        {
            i=n-1;
        }
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }

        if(c==0)
        {
            if(arr[i]%2!=0)
            {
                s++;
            }
        }
    }
    printf("%d",s);
}