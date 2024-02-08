#include <stdio.h>

int main(){
    int i;
    int lunghezza;
    int somma1;
    int somma2;
    printf("che lunghezza vuoi\n");
    scanf("%d",&lunghezza);
    int array[lunghezza];
    
    for(i=0;i<lunghezza;i++){
        printf("array[%d]=",i);
         scanf("%d",&array[i]);
         if(i%2==0){
             somma1=somma1+array[i];
             
         }else{
            somma2=somma2+array[i];
            
         }
    }
        printf("stampa la media dei numeri\n");
       
        if(lunghezza%2==0){
            printf("%f\n",somma1/(lunghezza/2.0));
            printf("%f\n",somma2/(lunghezza/2.0));
            
        }else{
            printf("%f\n",somma1/((lunghezza+1)/2.0));
            printf("%f\n",somma2/((lunghezza-1)/2.0));
        }
        
        
    
    return 0;
}
