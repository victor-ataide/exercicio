#include <stdio.h>

int main (){
	
	double	a, b, c, media;
	
	printf("qual e sua nota a: ");
	scanf("%lf", &a);
	printf("qual e sua nota b: ");
	scanf("%lf", &b);
	printf("qual e sua nota c: ");
	scanf("%lf", &c);
	
	media = ((a*2)+(b*3)+(c*5))/10;
	
	printf("MEDIA = %.1lf",media);
}
