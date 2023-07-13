#include<stdio.h>

int main(){
	
	float m;
	
	printf("insira a sua nota: \n");
	scanf("%f",&m);
	
	if (m >= 4.0 && m <7.0){
		
		printf("dã pra recuperar!");
	}
	
	if(m < 4.0){
	
		printf("Esquece");
	}
	
	else {
		printf("Aprovado!");
	}
	
}
