#include<stdio.h>

int main(){
	
	int n;
	
	printf("digite um valor de 1 at� 7: \n");
	scanf("%d", &n);
	
	switch(n){
		
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("segunda-feira"); 
			break;
		case 3:
			printf("ter�a-feira");
			break;
		case 4:
			printf("quarta-feira");
			break;
		case 5:
			printf("quinta-feira");
			break;
		case 6:
			printf("sexta-feira");
			break;
		case 7:
			printf("s�bado");
			break;
		default:
			printf("Valor inv�lido");
			break;	
	}
}
