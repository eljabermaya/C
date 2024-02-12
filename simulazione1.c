#include <stdio.h>
int coppiei(int num){
    int coppie=0;
    int numeroP=-1;
 while(num!=0){
     int cifra=num%10;
     if(numeroP==cifra){
         coppie++;
     }
     num=num/10;
     numeroP=cifra;
 }   
 return coppie;
}
int main(){
	int a,r;
	
	do{
		scanf("%d",&a);
	}while(a<0);
	
	r=coppiei(a);
	
	printf("%d",r);
	
	return 0;
}
