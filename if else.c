#include <stdio.h>

int main(){
    int età;
    printf("inserisci la tua età\n");
    scanf("%d",&età);
    if(età>=18){
    
        if(età>=21){
            printf("vota camera e senato\n");
            
        }else{
            printf("puoi votare solo la camera\n");
        }
        
    }else{
        printf("non puoi votare");
    }
