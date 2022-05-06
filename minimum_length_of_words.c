#include<stdio.h>
int main()
{
	char ch[100],i,len=0;      
	scanf("%s",ch);
	for(i=0 ; ch[i]!=NULL ; i++)
	{
		len=len+1;
	}
	printf("%d",len);
/*	char str[10];
	int len;
	scanf("%[^
]s",str);
	len=strlen(str);
	printf("%d",len);*/
}