#include<stdio.h>
#include<math.h>
int main()
{  
    int a,s;
    scanf("%d",&a);
    s=sqrt(a);
    if(a%(s*s)==0)
       printf("True");
    else
       printf("False");
       
        
    
}