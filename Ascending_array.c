#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int c[a];
    for(int i=0;i<a;i++){
        scanf("%d",&c[i]);
        
    }
    /*int d[b];
    for(int i=0;i<b;i++){
        scanf("%d",&d[i]);
    }*/
    
    int q,s=0;
    for(int i=a-1;i>0;i--){
        if(c[i]-c[i-1]>0){
            s++;
            
            
        }
        
    
    }
    if(s==a-1){
        printf("yes");
        
    }
    else{
        printf("no");
    }
    
}