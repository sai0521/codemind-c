#include<stdio.h>
int main()
{
    char str[1000],ch;
    int i,c=0;
    scanf("%[^
]s",str);
    scanf(" %c",&ch);
    for(i=0 ; str[i]!=NULL;i++)
    {
        if(ch==str[i])
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
    
}