#include <stdio.h>
#include <locale.h>
#define SIZE 6

int main(){
	setlocale(LC_ALL,"");
	//Declara��o de Variaveis
	char nome[SIZE][200];
	int idade[SIZE],i;
	
	for(i=0;i<SIZE;i++){
	
	printf("Adicione um nome: \n");
	scanf("%s",&nome[i]);
	printf("Adicione uma idade: \n");
	scanf("%d",&idade[i]);

}

	for(i=0;i<SIZE;i++){
	
	fflush(stdin);
	printf("%i� Nome: %s \n",i+1,nome[i]);
	printf("%i� Idade: %d \n ",i+1,idade[i]);
}


}


