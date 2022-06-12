#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int fence=(a+2*c)*(b+2*c);
    fence-=a*b;
    printf("%d",fence*d);
    return 0;
}