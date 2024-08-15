#include <stdio.h>
#include <locale.h>
#include <ctype.h>


int main(){
	setlocale(LC_ALL,"");
	//Declaração de Variaveis
	float notas,soma=0,media;
	int i=0;
	char resposta;
	
	
	
	//Solicitando dados do usuario

	
	do{

	
	printf("Insira uma nota:\n");
	scanf("%f",&notas);
	resposta=toupper(resposta);
	setbuf(stdin,0);
	printf("Deseja inserir mais uma nota? S/N \n");
	scanf("%c",&resposta);

	
	i=i+1;
	soma=soma + notas;
	}while(resposta=='S');
	
	//Operações aritmeticas

	media=soma/i;

printf("Media: %.1f. \n",media);
printf("Numero de repetições: %d \n",i);
}





