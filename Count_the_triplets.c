#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for (i=1; i<=a; i++)
    {
        int n,j,k,l,c=0;
        scanf("%d",&n);
        int arr[n];
        for (j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
        for (j=0; j<n; j++)
        {
            for (k=0; k<n; k++)
            {
                for (l=0; l<n; l++)
                {
                    if (j!=k && k!=l && j!=l && j>k && k>l &&j>l)
                    {
                        if (arr[j]+arr[k]==arr[l])
                        {
                            c++;
                        }
                        if (arr[k]+arr[l]==arr[j])
                        {
                            c++;
                        }
                        if (arr[j]+arr[l]==arr[k])
                        {
                            c++;
                        }
                    }
                }
            }
        }
        if (c>0)
        {
            printf("%d
",c);
        }
        else
        {
            printf("%d
",-1);
        }
    }

}