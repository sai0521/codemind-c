#include<stdio.h>
int main()
{
    char ch[100];
    int n,m,i;
    scanf("%[^
]s",ch);
    scanf("%d %d",&n ,&m);
    for(i=n ; i<=m ; i++)
    {
        printf("%c",ch[i]);
    }
}