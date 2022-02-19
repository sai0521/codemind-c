#include<stdio.h>
int main()
{
    char ch[100];
    int i,sum=0;
    scanf("%[^
]s",ch);
    for(i=0 ;ch[i]!=NULL ; i++)
    {
        if(ch[i]>=47 && ch[i]<=58)
        {
            sum=sum+ch[i]-48;
        }
    }
    printf("%d",sum);
}