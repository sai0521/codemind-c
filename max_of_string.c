#include<stdio.h>
int main()
{
    char ch[100];
    int max=0,i;
    scanf("%[^
]s",ch);
    for(i=0 ;ch[i]!=NULL ; i++)
    {
        if(max<ch[i])
        {
            max=ch[i];
        }
    }
    printf("%c",max);
}