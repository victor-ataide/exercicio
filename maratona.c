#include <stdio.h>
#include <stdlib.h>

int main (void){

    int dist_post = 0, ult = 0;
    int postos = 0,dist_max = 0;
    int i = 0;
    
    scanf("%d %d", &postos, &dist_max );
    
    for(i = 0; i < postos; i++){
        scanf("%d", &dist_post);
        if (dist_post - ult > dist_max){
            printf("N");
            return 0;
        } else {
            ult = dist_post;
        }
    }
    if (42195 - ult > dist_max){
        printf("N");
            return 0;
        } 
    printf("S");
    return 0;
}