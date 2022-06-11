#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        int j,k,s=0,x,y,c=0;
        int n,m;
        scanf("%d%d",&n,&m);
        int arr[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",arr+j);
        }
        for(j=0;j<n;j++)
        {
            s=0;
            for(k=j;k<n;k++)
            {
                s=s+arr[k];
                if(s==m)
                {
                    x=j;
                    y=k;
                    c+=1;
                    break;
                }
            }
            if(c==1)
            {
                break;
            }
        }
        if(i<=a-1)
        {
            if(c==1)
            {
                printf("%d %d
",x+1,y+1);
            }
            else
            {
                printf("-1
");
            }
        }
        else
        {
            if(c==1)
            {
                printf("%d %d",x+1,y+1);
            }
            else
            {
                printf("-1");
            }
        }
    }
}