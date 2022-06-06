#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(n>a || n>b )
        {
            printf("UPLOAD ANOTHER
");
            
        }
        else
        {
            if(a==b)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
    }
}