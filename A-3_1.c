#include<stdio.h>

#define texto "Entrada e saída de dados"

int main(){
	
	printf("%s.\n", texto);
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("digite a idade: \n");
	scanf("%d", &idade);
	
	printf("Digite sua altura: \n");
	scanf("%f", &altura);
	
	printf("Digite seu nome: \n");
	scanf("%s", &nome);
	
	printf("dados informados: \n");
	printf("Idade: %d. \n", idade);
	printf("altura: %f. \n", altura);
	printf("nome: %2f. \n", nome);
}
