#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"");
	
	//Declaração de Variaveis
	float notas,media,soma;
	int i;
	
	
	//Solicitando dados ao usuario
	for(i=1;i<=4;i++){
	printf("Informe a sua %iª nota: \n",i);
	scanf("%f",&notas);
	soma=soma + notas;
	}
	

	
	
	//Expondo dados do usuario
		media=soma/4;
		printf("Media: %.1f. \n",media);
}
