#include <stdio.h>
#include <locale.h>
#include<stdlib.h>


void cabecalho()
{system("cls || clear");
printf("\n===SENAI===\n");
}
int main(){
	setlocale(LC_ALL,"");
	
	//Declarando variaveis
	char nome[200];
	int idade;
	float nota1,nota2,nota3,media;
	
	//Solicitando dados ao usuario
	printf("Escreva o seu nome: ");
	scanf("%s",&nome);
	printf("Escreva a sua idade: ");
	scanf("%d",&idade);
	cabecalho();
	
	//Solicitando notas ao usuario
	printf("Escreva a sua primeira nota:  ");
	scanf("%f",&nota1);
	printf("Escreva a sua segunda nota:  ");
	scanf("%f",&nota2);
	printf("Escreva a sua terceira nota:  ");
	scanf("%f",&nota3);
	cabecalho();
	
	//Operadores aritmeticos
	media=(nota1+nota2+nota3)/3;
	
	//Valores Condicionais
	
	if(media>=7){
		printf("Nome: %s \n",nome);
		printf("Idade: %i \n",idade);
		printf("Media: %.1f. \n",media);
		printf("Situacao:Aprovado!");
	}else{
		printf("Nome: %s \n",nome);
		printf("Idade: %i \n",idade);
		printf("Media: %.1f. \n",media);
		printf("Situacao:Reprovado!");}
	
	return 0;	
	
	
	
}
