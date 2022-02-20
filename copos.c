#include <stdio.h>

int main (void){
    int movimento_n, movimento, i = 0;
    char atual;

    if (scanf("%d", &movimento_n) == 1);
    if (scanf(" %c" , &atual)== 1);

    for(i=0;i<movimento_n;i++){
        if(atual == 'A'){
            if (scanf("%d" , &movimento)== 1){
                if (movimento == 1){
                    atual = 'B';
                } else if (movimento == 3) {
                    atual = 'C';
                }else if (movimento == 2) {
                    atual = 'A';
                }
            }
        } else if(atual == 'B'){
            if (scanf("%d" , &movimento)== 1){
                if (movimento == 1){
                    atual = 'A';
                }else if (movimento == 2) {
                    atual = 'C';
                }else if (movimento == 3) {
                    atual = 'B';
                }
            }
        } else if(atual == 'C'){
            if (scanf("%d" , &movimento)== 1){
                if (movimento == 2){
                    atual = 'B';
                } else if (movimento == 3) {
                    atual = 'A';
                } else if (movimento == 1) {
                    atual = 'C';
                }
            }
        }
     }
   printf ("%c" , atual);
 return 0;
 }