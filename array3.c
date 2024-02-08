#include <stdio.h>

int main(){
   struct Persona{
       int età;
       float altezza;
       char genere;

   };
   
   int n;
   int i=0;
   float altezza;
   int età;
   int genereF=0;
   printf("inserisci numero delle persone\n");
   scanf("%d",&n);
   struct Persona array[n];
   for(i=0; i<n;i++){
        struct Persona pers;
       printf("inserisci età\n");
       scanf(" %d",&pers.età);
       
       printf("inserisci altezza\n");
       scanf(" %f",&pers.altezza);
       
       printf("inserisci genere\n");
       scanf(" %c",&pers.genere);
       
       array[i]=pers;
       
       altezza=altezza+pers.altezza;
       
        età=età+pers.età;
       
       if(pers.genere=='f'){
           genereF++;
           
       }
       
   }
   printf("numero maschi e numero femmine\n");
   printf("%d %d\n",n-genereF,genereF);
   printf("altezza media:%f\n",altezza/n);
   printf("eta media:%f\n",(float)età/n);
    return 0;
}
