//Ariel Jesús Fernández Mena


#include<stdio.h>
#include<stdbool.h>

int main(){
	int i,serie=2,suma=0;
	bool valido=false;
	
	for(i=1; serie<=1800;i++){
		if(i%2!=0){
			valido=false;
		}
		else if(i%2==0){
			valido=true;
		}
		
		if(valido){
			suma+=serie;
			printf(" %i ", serie);
			serie+=2;
		}
		else{
			suma+=serie;
			printf(" %i ", serie);
			serie+=3;
		}		
	}
	printf("\n ");
	printf("\nLa suma de los terminos de la serie es: %i", suma);
}
