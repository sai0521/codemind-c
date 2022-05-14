#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k=0,j,c=0,r=0,m;
    scanf("%d",&n);
    int arr[100],len;
    len=int(log10(n))+1;
    while(n>0)
    {
        m=n%10;
        n=n/10;
        arr[k++]=m;
    }
    for(i=0;i<k;i++)
    {
        c=0;
        for(j=0;j<k+1;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                {
                    c++;
                }
            }
        }
        if(c==0)
        {
            r++;
        }
    }
    if(r==len) printf("Unique Number");
    else printf("Not Unique Number");
    
}