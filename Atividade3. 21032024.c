#include <stdio.h>
#include <locale.h>

int main(){
	//Declaração de Variaveis
	int numero[10],numerospositivos=0,numerosnegativos=0,i;
	int somadenumerospositivos=0;
	
	for(i=0;i<10;i++){
		printf("Escreva um numero: \n");
		scanf("%d",&numero[i]);
		
		if(numero[i]>=0 ){
			numerospositivos++;
			somadenumerospositivos+=numero[i];
		}else{
			numerosnegativos++;
		}
	}
	system("cls||clear");
	printf("Numeros positivos: %d \n",numerospositivos);
	printf("Numeros negativos: %d \n",numerosnegativos);
	printf("Soma de Numeros Positivos: %d \n",somadenumerospositivos);
}
