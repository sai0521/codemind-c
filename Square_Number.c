#include<stdio.h>
#include<math.h>
int square_number(int n)
{
	int s;
	s=sqrt(n);
    if(s*s==n)
    {
    	printf("True");
	}
	else
	{
		printf("False");
	}
    
}
int main()
{
    int n,s;
    scanf("%d",&n);
    square_number(n);

}