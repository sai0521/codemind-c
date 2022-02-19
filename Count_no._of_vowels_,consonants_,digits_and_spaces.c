#include<stdio.h>
int main()
{
    char ch[100];
    int vc=0 ,dc=0,cc=0,sc=0,i;
    scanf("%[^
]s",ch);
    for(i=0 ; ch[i]!=NULL ; i++)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
        {
            vc++;
        }
        else if(ch[i]==32)
        {
            sc++;
        }
        else if(ch[i]>=47 && ch[i]<=58)
        {
            dc++;
        }
        else
        {
            cc++;
        }
    }
    printf("Vowels: %d
",vc);
    printf("Consonants: %d
",cc);
    printf("Digits: %d
",dc);
    printf("White spaces: %d",sc);
}