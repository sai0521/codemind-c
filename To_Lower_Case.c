#include<stdio.h>
int main()
{
    char ch[100];
    int i;
    scanf("%s",ch);
    for(i=0 ; ch[i]!=NULL ;i++)
    {
        if(ch[i]>=65 && ch[i]<=90)
        {
            printf("%c",ch[i]+32);
        }
        else
        {
            printf("%c",ch[i]);
        }
    }
}