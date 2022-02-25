#include<stdio.h>
int main()
{
    int arr1[3],arr2[3],i,j,c1=0,c2=0;
    for(i=0 ;i<3 ;i++)
    {
        scanf("%d",arr1+i);
    }
    for(i=0 ;i<3 ;i++)
    {
        scanf("%d",arr2+i);
    }
    for(i=0 ;i<3 ;i++)
    {
       if(arr1[i]>arr2[i])
       {
           c1++;
       }
       else if(arr1[i]<arr2[i])
       {
           c2++;
       }
       else
       {
           continue;
       }
    }
    printf("%d ",c1);
    printf("%d ",c2);


}