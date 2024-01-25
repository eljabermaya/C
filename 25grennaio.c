#include <stdio.h>

int main(){
    int studente1=01;
    int studente2=02;
    int voto3=30;
    int voto5=29;
    printf("inserisci i due voti\n");
    scanf("%d %d",&voto3,&voto5);

    if (voto3>voto5){
        printf("lo studente con il voto più alto è: %d\n",studente1);
        printf("lo studente con il voto più basso è: %d\n ",studente2);
        
    }else if (voto5>voto3){
        printf("lo studente con il voto più alto è: %d\n",studente2);
        printf("lo studente con il voto più basso è: %d\n ",studente1);
        
    }else{
        printf("uguali");
    }

    return 0;
}
