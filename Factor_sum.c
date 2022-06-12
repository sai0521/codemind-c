#include<stdio.h>
#include<string.h>
void sort(int *arr,int a)
{
    int i,j;
    for (i=0; i<a; i++)
    {
        for (j=0; j<a-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int fact(int a)
{
    int sum=0,i;
    for (i=1; i<=a; i++)
    {
        if (a%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}
int check(int *arr,int a,int se)
{
    int i,f=0;
    for (i=0; i<a; i++)
    {
        if (arr[i]==se)
        {
            f=1;
            break;
        }
    }
    if (f==1){
        return 1;
    }
    return 0;
}
int main(){
    char str[1000];
    scanf("%[^
]s",str);
    int l=strlen(str),i,j,i1=0;
    int arr[100],k=0;
    for (i=0; i<l; i++){
        if (str[i]==','){
            int val=0;
            for (j=i1; j<i; j++){
                val+=str[j]-48;
            }
            arr[k++]=val;
            i1=i+1;
        }
        if (i==l-1){
            int val=0;
            for (j=i1; j<=i; j++){
                val+=str[j]-48;
            }
            arr[k++]=val;
            i1=i+1;
            break;
        }
    }
    int res[100],k2=0;
    for (i=0; i<k; i++){
        int s=fact(arr[i]);
        int r=check(arr,k,s);
        if (r==1){
            res[k2++]=arr[i];
        }
    }
    sort(res,k2);
    if (k2>0){
        for (i=0; i<k2; i++){
            printf("%d ",res[i]);
        }
    }
    else{
        printf("%d",-1);
    }
    return 0;
}