#include <stdio.h>

 int main(){
     int n;
     int i;
     printf("inserisci un valore\n");
     scanf("%d",&n);
     int  array[n];
   int array2[n];
   printf("Primo array:\n");
   for(i=0; i<n; i++){
       printf("\ninserisci un numero:");
       scanf("%d",&array[i]);
      
   }
   printf("Secondo array:\n");
   for(i=0;i<n;i++){
       printf("\ninserisci un numero: ");
       scanf("%d",&array2[i]);
   }
   for(i=0;i<n;i++){
       printf("%d, ",array[i]+array2[n-1-i]);
   }
   
    return 0;
}
