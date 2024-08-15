#include <stdio.h>
#include <locale.h>
#define SIZE 5
int main(){
	setlocale(LC_ALL,"");
	int numero[SIZE];
	int i;
	
	for(i=0;i<5;i++){
		printf("Escolho o %iª numero:\n ",i+1);
		scanf("%d",&numero[i]);
		
		if(numero[i] < 0){
			numero[i]=0;
		}
		
	}
		for(i=0;i<5;i++){
		
		printf("%iª Numero:%d \n",i+1,numero[i]);
	}
}
