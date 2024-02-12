#include <stdio.h>
#define N 10

int main(){
    int i;
    int j;
    
    int src[N];
    for(i=0;i<N;i++){
       scanf("%d",&src[i]);
    }
    for(i=0;i<N;i++){
        if(src[i]%2==0){
            for(j=9;j>i;j--){
                if(src[j]%2==1){
                    int t=src[i];
                    src[i]=src[j];
                    src[j]=t;
                    break;
                }
            }
        }
    }
for(i=0;i<N;i++){
    printf("%d ",src[i]);
}




return(0); 
  
}
