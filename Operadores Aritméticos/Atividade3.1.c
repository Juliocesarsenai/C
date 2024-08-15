#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


float calcularamedia(float n1,float n2){
	float media;
	media=(n1+n2)/2;
	return media;

	
	
	
}
int main(){
	
	setlocale(LC_ALL,"");
	//Declaração de Variaveis
	int i;
	float numero1,numero2,media;
	
	
	//Solicitando dados ao usuario
	for(i=1;i<=2;i++){
	printf("Digite o primeiro numero: \n");
	scanf("%.1f. \n",&numero1);
	printf("Digite o segundo numero: \n");
	scanf("%.1f. \n",&numero2);


	}
	//Expondo dados ao usuario
 	media=calcularamedia(numero1,numero2);
	printf("Media: %.1f.\n",media);
	
	
}
