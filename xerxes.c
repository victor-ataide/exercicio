#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int n, x, d, dario=0, xerxes=0, i;
	//int qtd_d=0, qtd_x=0;
	
	if(scanf(" %d", &n)==1);
	fflush(stdin);
	for (i=1; i<=n;i++) {
		if(scanf(" %d %d", &d, &x)==1);	
		if(d == 0){
		    if(x == 1) {dario++;}
		    if(x == 2) {dario++;}
		    if(x == 3) {xerxes++;}
		    if(x == 4) {xerxes++;}
		}if(d == 1){
		    if(x == 0) {xerxes++;}
		    if(x == 2) {dario++;}
		    if(x == 3) {dario++;}
		    if(x == 4) {xerxes++;}
		}if(d == 2){
		    if(x == 0) {xerxes++;}
		    if(x == 1) {xerxes++;}
		    if(x == 3) {dario++;}
		    if(x == 4) {dario++;}
		}if(d == 3){
		    if(x == 0) {dario++;}
		    if(x == 1) {xerxes++;}
		    if(x == 2) {xerxes++;}
		    if(x == 4) {dario++;}
		}if(d == 4){
		    if(x == 0) {dario++;}
		    if(x == 1) {dario++;}
		    if(x == 2) {xerxes++;}
		    if(x == 3) {xerxes++;}
		}		
	}
	if (dario>xerxes){
		printf("dario\n");
	} 	else {
		printf("xerxes\n");
	}
    return 0;
}
