#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "");
	
	//Declarando Variaveis
	int notas,soma,contador;
	
	//Solicitando dados para o usuario
	for(contador=1;contador <= 5;contador++){
	
	printf("Digite a %iª nota: ", contador);
	scanf("%i",&notas);

	soma= soma + notas;

}

	//Exibindo resultados
	system("cls||clear");
	printf("Soma: %i ",soma);

}
