#include <stdio.h>

int main(){
	
	float nota1, nota2, media, freq;
	
	printf("Qual a nota 1: ");
	scanf("%f", &nota1);
	printf("Qual a nota 2: ");
	scanf("%f", &nota2);
	
	
	
	media = (nota1 + nota2)/2;
	
	if (media >= 9.5 )
		printf("parabens! aprovado");
		else printf("Tente novamente! Reprovado!");
		
	return 0;
}
