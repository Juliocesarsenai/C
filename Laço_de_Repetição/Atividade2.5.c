#include <stdio.h>
#include <locale.h>
#define SIZE 7

int main(){
	setlocale(LC_ALL,"");
	int numero[6],numerospares=0,numerosimpares=0,i;
	
	for(i=1;i<SIZE;i++){
		printf("Escolha o %iª numero: ",i);
		scanf("%d",&numero[i]);
	
		if(numero[i]%2!=0){
			numerosimpares++;
		}else{
			numerospares++;
		}
		
	}
	
	for(i=1;i<SIZE;i++){
	
	system("cls||clear");
	printf("Numeros Informados: %d \n",numero[i]);
	printf("Numeros pares: %d \n",numerospares);
	printf("Numeros impares: %d \n",numerosimpares);
	

return 0;
}

}
