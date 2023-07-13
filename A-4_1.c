#include <stdio.h>

int main(){
	
	float m;
	
	
	printf("Digite uma nota: ");
	scanf("%f", &m);
	
	if(m >= 7.0) {
		printf("Aluno aprovado com nota: %2f", m);
	}
	
	else{
		printf("Aluno reprovado com nota: %2f", m)
	}
}
