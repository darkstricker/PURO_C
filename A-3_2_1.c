#include <stdio.h>

int main(){


	int a, b, sub, add, mul,div;

	printf("Digite o primeiro valor:\n);
	scanf("%d", &a);
	
	printf("Digite o segundo valor:\n);
	scanf("%d", &b);

	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;

	printf("Resultados: \n");
	printf("soma: %d. \n", add);
	printf("subtra��o: %d. \n", sub);
	printf("multiplica��o: %d. \n", mul);
	printf("divis�o: %d. \n", div);
}
