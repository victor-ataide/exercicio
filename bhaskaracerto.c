#include<stdio.h>
#include<math.h>

int main(){
    
    double a, b, c, delta, r1, r2; 
    
    printf("digite o valor de A:");
    scanf("%lf", &a);
    printf("digite o valor de B:");
    scanf("%lf", &b);
    printf("digite o valor de C:");
    scanf("%lf", &c);
    
    delta = (pow (b,2))-(4*a*c);

    if( delta < 0 ){
        r1 = (-b +(sqrt(delta)))/(2*a);
        r2 = (-b -(sqrt(delta)))/(2*a);
        printf ("R1 = %.5lf\n", r1);
        printf ("R2 = %.5lf\n", r2);
     }else{ 
        printf ("Impossivel calcular");
     }
     
return 0;
}
