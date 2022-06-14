
//Implemente uma matriz transposta. 

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	
	int matrizA [3][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 0, 5, 8}};
	printf("   MATRIZ A \n\n");                                             
	for(int i=0; i<3; i++) {                                               
		for(int j=0; j<4; j++) {                                           
			printf("  %d", matrizA [i][j]);                                      
		}
		printf("\n");
	}
		printf("\n\n");                                        
		printf("  Matriz Transposta de A\n\n");                   
	
	for(int j=0; j<4; j++) {                                               
		for(int i=0; i<3; i++) {                                           
			printf("  %d", matrizA [i][j]);                                     
		}
		printf("\n");
	}	
	return 0;
}
