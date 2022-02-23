#include<stdio.h>
int main()
{
    char ch[100];
    scanf("%s",ch);
    int i;
    for(i=0 ; ch[i]!=NULL ; i++)
    {
        
        if(ch[i]=='.')
        {
            printf("[");
        }
        printf("%c",ch[i]);
        if(ch[i]=='.')
        {
            printf("]");
        }
    }
}