#include<stdio.h>
#include<stdlib.h>
//Implemente uma matriz identidade de tamanho 4x4.

int main(void) {
	
	int Mtident[4][4] = {0};
	
	for(int i=0; i<4; i++) {
		for(int j=0; j<4; j++) {
			if(i==j){                     
				Mtident[i][j]=1;            
			}
			printf(" %d ", Mtident[i][j]);
		}
		printf("\n");
	}
	return 0;
}
