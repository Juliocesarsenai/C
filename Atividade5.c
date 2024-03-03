#include <stdio.h>

int main(){
	
	float salariominimo,salario,salarioequivalente;
	salariominimo=1412.00;
	
	printf("Qual é o seu salario: ");
	scanf("%f",&salario);
	salarioequivalente=salario/salariominimo;
	printf("O seu salario equivale aproximadamente a %.2f. ",salarioequivalente,"salarios minimos");
}

