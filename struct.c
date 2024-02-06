#include <stdio.h>

int main(){
    struct Persona{
        int età;
        float altezza;
        
    }array[3];
    int i;
    for(i=0; i<3;i++){
        printf("inserisci età e altezza\n");
        scanf("%d %f",&array[i].età,&array[i].altezza);
    }
    for(i=0; i<3;i++){
        printf(" eta e altezza;\n%d %f",array[i].età,array[i].altezza);
    }
    
    
    return 0;
}
