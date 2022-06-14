//Implemente uma matriz diagonal.

#include<stdio.h>
#include<stdlib.h>
	
	int main(void) {
	
	int MtDiagonal[5][5] = {0};                   
	int incremento = 1;                       
	
	for(int i=0; i<5; i++) {              
		for(int j=0; j<5; j++) {         
			if(i==j){                      
				MtDiagonal[i][j] = incremento++;           
			}
			printf(" %d ", MtDiagonal[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
