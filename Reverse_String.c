#include<stdio.h>
int main()
{
    char ch[100];
    int i,c=0;
    scanf("%[^
]s",ch);
    for(i=0 ;ch[i]!=NULL;i++)
    {
        c++;
    }
    for(i=c-1 ;i>=0 ;i--)
    {
        printf("%c",ch[i]);
    }
}