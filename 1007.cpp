#include <stdio.h>	

int main (){
	
	int a, b, c, d, diferenca;
	
	printf("de valor para A: ");
	scanf("%d", &a);
	printf("de valor para B: ");
	scanf("%d", &b);
	printf("de valor para C: ");
	scanf("%d", &c);
	printf("de valor para D: ");
	scanf("%d", &d);
	
	diferenca = ((a*b)-(c*d));
	
	printf("DIFERENCA = %d", diferenca);
	
}
