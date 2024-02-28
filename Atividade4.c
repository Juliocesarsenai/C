#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
	system("cls||clear");
}

int main(){
	//Declaração de Variaveis
	int numero1,numero2;
	float soma,produto,media;
	
	//Solicite dados ao usuario
	printf("Escolha um numero: ");
	scanf("%i",&numero1);
	printf("Escolha outro numero: ");
	scanf("%i",&numero2);
	
	//Operadores aritméticos
	soma=numero1+numero2;
	produto=numero1*numero2;
	media=(numero1+numero2)/2;
	
	//Valores Condicionais
	if(numero1>numero2){
		printf("Soma: %f \n",soma);
		printf("Produto: %f \n",produto);
		printf("Media: %f \n",media);
		printf("Maior valor:%f \n",numero1);
		printf("Menor valor:%f \n",numero2);}
		
		if(numero1<numero2){
		printf("Soma: %f \n",soma);
		printf("Produto: %f \n",produto);
		printf("Media: %f \n",media);
		printf("Maior valor:%f \n",numero2);
		printf("Menor valor:%f \n",numero1);}
		
		
		
		
	if(numero1=numero2){
		printf("Soma: %f \n",soma);
		printf("Produto: %f \n",produto);
		printf("Media: %f \n",media);
		printf(numero1,"é igual a",numero2);}
	
	
}
