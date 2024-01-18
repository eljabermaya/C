#include <stdio.h>

int main (){
  int numero1;
  int numero2;
  printf("inserisci i due numeri\n");
  scanf("%d %d",&numero1,&numero2);
  printf("stampami la somma\n%d\n",numero1+numero2);
  if(numero1+numero2==10){
      printf("ciao");
  }else{
      printf("no");
  }
  
  return 0;
}
