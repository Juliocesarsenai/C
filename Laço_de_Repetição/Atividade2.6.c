#include <stdio.h>
#include <stdlib.h>


int main(){
	//Declara��o de Variaveis
	int numeroinformado,i;
	
	//Solicitando dados ao usuario
	printf("Me informe um numero: ");
	scanf("%d ",&numeroinformado);
	
	//La�os de Condi��o
	
	for(i=1;i<=10;i++){
		printf("%d x %d=%d \n",numeroinformado,i,numeroinformado * i);
	}


}
