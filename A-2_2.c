#include <stdio.h>

int main(){
	
	float altura = 0.0;
	float peso = 0.0;
	float imc = (altura * altura)/ peso;
	
	
	printf("digite sua altura \n");
	scanf("%f", &altura);
	
	printf("digite seu peso \n");
	scanf("%f", &peso);
	
	printf("a altura informada foi: %2f. \n", altura);
	
	printf("o peso informado foi: %2f. \n", peso);
	
	printf("seu IMC é: %2f", &imc);
	
}
