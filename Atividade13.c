#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	//Declaração de Variaveis
	int codigo,idade,quantidadedepessoas=0,mulheresricas=0,maioridade=0,menoridade=0;
	float salario=0,salariototal=0,mediadesalario=0;
	char nome[200];
	char sexo;
	//Solicitando dados do usuario
	printf("Se deseja adicionar uma pessoa, tecle 1, senão tecle 2: ");
	scanf("%d",&codigo);
	
	while(codigo==1){
		
	
		printf("Informe o nome: ");
		scanf("%s",&nome);
		printf("Informe a idade: ");
		scanf("%d",&idade);
		printf("Informe o sexo: ");
		scanf("%s",&sexo);
		printf("Informe o salario: ");
		scanf("%f",&salario);
		system("cls||clear");
		printf("Deseja continuar?");
		scanf("%d",&codigo);
		system("cls||clear");
		quantidadedepessoas++;
		salariototal=salariototal+salario;
	
		if(sexo=='F' && salario>=5000){
			mulheresricas ++;
		}
		
		}
		mediadesalario=salariototal/quantidadedepessoas;
		printf("Media de salario: %.1f. \n",mediadesalario);
		printf("Maior Idade: %d \n",maioridade);
		printf("Menor Idade: %d \n",menoridade);
		printf("Mulheres com Salario maior que 5000: %d \n",mulheresricas);
		
		
		
	}
	
	
