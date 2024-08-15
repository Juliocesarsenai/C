#include <stdio.h>

int main(){
	
	int numero,antecessor,sucessor;
	
	
	printf("Escolha um numero: ");
	scanf("%i",&numero);
	
	printf("----Resultados----\n");
	printf("Numero escolhido:%i\n",numero);
	antecessor=numero-1;
	printf("Numero antecessor:%i\n",antecessor);
	sucessor=numero+1;
	printf("Numero sucessor:%i\n",sucessor);
	
}
