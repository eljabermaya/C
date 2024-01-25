#include <stdio.h>

int main(){
   int giorno;
   int mese;
   int anno;
   printf("inserisci giorno;mese;anno\n");
   scanf("%d/%d/%d",&giorno,&mese,&anno);
  int febbraio=28;
  if((anno-2024)%4==0){
    febbraio=29;
  }
  if(mese==1){
    printf("%d",giorno);
  }else if(mese==2){
    printf("%d",(31+giorno));
    
  }else if(mese==3){
    printf("%d",(31+febbraio+giorno));
  }else if(mese==4){
    printf("%d",(31+febbraio+31+giorno));
  }

    return 0;
}
