#include <stdio.h>

int main (){

    double a, r, n;

    n = 3.14159;

    printf("Qual e o numero: ");
    scanf("%lf", &r);

    a = (n*(r*r));

    printf("A = %.4lf\n", a);



}