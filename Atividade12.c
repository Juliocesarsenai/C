#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	
	//Declaração de Variaveis
	int numero=1,numerospares=0,numerosimpares=0,soma1=0,soma2=0,somageral=0;
	float media=0,mediageral=0;
	
	//Solicitando dados

	
	while(numero!=0){
	
		
	if(numero==0){
		break;
	}
	
	
	
		printf("Escreva um numero: ");
	scanf("%d",&numero);
	if(numero%2==0 ){
		fflush(stdin);
		numerospares++;
		soma1=soma1+numero;
	}
	if(numero%2!=0){
		fflush(stdin);
		numerosimpares++;
		soma2=soma2+numero;
	}
	
	}



	//Operadores Aritmeticos
	somageral=soma1+soma2;
	media=soma1/numerospares;
	mediageral=somageral/(numerospares+numerosimpares);
	//Expondo dados do usuario
	printf("Numeros Pares:%d \n",numerospares);
	printf("Numeros Impares:%d \n ",numerosimpares);
	printf("Media dos Valores Pares: %.1f. \n",media);
	printf("Media dos Valores Lidos: %.1f.\n",mediageral);
	
}



