#include<stdio.h>
int main()
{
    char ch[1000];
    int i,c=1;
    scanf("%[^
]s",ch);
    for(i=0 ;ch[i]!=NULL;i++)
    {
        if(ch[i]==32 )
        {
            c++;
        }
    }
    printf("%d",c);
}
