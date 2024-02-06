#include <stdio.h>

int main(){
    int somma=0;
    int num;
    
    do{
      printf("inserisci un numero\n");
    scanf("%d",&num);  
    somma=somma+num;
    }while(num!=0);
    printf("la somma:%d\n",somma);
    


    return 0;
}
