#include <stdio.h>

int main(){
    int somma=0;
    int i;
    int array[5];
    for(i=0;i<5;i++){
        printf("inserisci 1 numero\n");
        scanf("%d",&array[i]);
        
    }
    for(i=0;i<5;i++){
        printf("pari o dispari\n");
        if(array[i]%2==0){
            printf("pari %d\n",array[i]);
        }else{
            printf("dispari %d\n",array[i]);
        }
        somma+=array[i];
    
    }
  printf("somma:%d\n",somma);
    return 0;
}
