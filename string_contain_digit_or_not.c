#include<stdio.h>
int main()
{
    char ch[100];
    int i,c=0;
    scanf("%s",ch);
    for(i=0 ; ch[i]!=NULL ; i++)
    {
        if(ch[i]>=48 && ch[i]<=57)
        {
            c++;
        }
    }
    if(c>0)
    printf("Contains %d digit",c);
    else
    printf("Doesn't contain digit");
}