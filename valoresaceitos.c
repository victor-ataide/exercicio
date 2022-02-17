#include <stdio.h>

int main (){
	
	int a,b,c,d;
	
	printf("digite o valor de A: ");
	scanf("%d", &a);
	printf("digite o valor de B: ");
	scanf("%d", &b);
	printf("digite o valor de C: ");
	scanf("%d", &c);
	printf("digite o valor de D: ");
	scanf("%d", &d);
	
	if (b > c && d > a && c + d > a + b && c > 0 && d > 0 && a %2 == 0)
		printf("valores aceitos");
		else printf("valores nao aceitos");
	
	return 0;
}
