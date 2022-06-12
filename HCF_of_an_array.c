#include<stdio.h>
int hcf(int x, int y)
{
    if(x%y==0)
    {
        return y;
    }
    else
    {
        return hcf(y,x%y);
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n],s;
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    s=hcf(arr[0],arr[1]);
    for(i=2;i<n;i++)
    {
        s=hcf(s,arr[i]);
    }
    printf("%d",s);
}
/*
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    int min=arr[0];
    for(i=0;i<n;i++)
    {
        if(min<arr[i])
        {
            min=arr[i];
        }
    }
    while(1)
    {
        int flag=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]%min==0)
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
            min-=1;
        }
        else
        {
            break;
        }
    }
    printf("%d",min);
    
}*/




