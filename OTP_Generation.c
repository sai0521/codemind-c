#include<stdio.h>
int main()
{
    char ch[100];
    scanf("%s",ch);
    for (int i=0;ch[i]!=NULL;i++)
    {
        if(ch[i]>=48 && ch[i]<=57)
        {
            if((int(ch[i])-48)%2!=0)
            {
                printf("%d",(int(ch[i])-48)*(int(ch[i])-48));
            }
        }
    }
}