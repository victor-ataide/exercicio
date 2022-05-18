#include <stdio.h>
#include <string.h>

int main() {
	int i = 0, l=0;
	float mediageral;
	
	struct Estudante{
		int matricula[10];
		char nome[200];
		float media;
		float nota[4];
	};
	
	struct Estudante estudante [10];
	
	for (i=0;i<11;i++){
		printf("Nome: ");
		scanf("%[^\n]s", &estudante[i].nome);
		
		fflush(stdin);
		printf("Matricula: ");
		scanf("%d", &estudante[i].matricula);
		fflush(stdin);	
	
		estudante[i].media = 0;
		
		for (l=0;l<4;l++){
			printf("Nota: ");
			scanf("%f", &estudante[i].nota[l]);
			fflush(stdin);
			estudante[i].media += estudante[i].nota[l];
		}
		estudante[i].media /= 4;
		printf("MEdia: %.2f\n", estudante[i].media);
		
	}
	
	
	
	return 0;
}
