#include <stdio.h>

int main(){
	
int idade;

printf ("digite sua idade: ");
scanf ("%d", &idade);

if (idade == 82)
	printf("ganha premio 2");
	else
		if (idade == 41)
		printf("ganha premio 1");
		else	
			if (idade >= 65)
			printf ("voto opcional");
			else
				if (idade >= 18)
				printf("voto obrigatorio");
					if (idade == 17)
					printf ("voto opcional");
					else
						if(idade == 16)
						printf ("voto opcional");
						else
							if(idade <=15)
							printf ("nao vota");
							else
								if(idade == 1 )
								printf ("nao vota");
								else	
									if (idade <1)
									printf ("nao nasceu");
									else
										
	return 0;				
}

