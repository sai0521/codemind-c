#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0 ; i<n ;i++)
    {
        int a,b,c=0;
        scanf("%d %d",&a,&b);
        for(a;a<=b;a++)
        {
            if(a%10==2 || a%10==3|| a%10==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}