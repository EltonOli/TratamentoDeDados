
//Calcule a media de valores do triângulo inferior de uma matriz 4x4.

#include<stdio.h>
#include<stdlib.h>
	
	int main(void) {
	
	int matriz[4][4] = {{10, 11, 12, 13},{14, 15, 16, 17},{18, 19, 20, 21},{22, 23, 24, 25}}; 
	int contador = 0, soma = 0;
	float mediaTInf = 0;
	
	printf("\n*****Matriz*****\n");
	
	for(int i=0; i<4; i++) {
		for(int j=0; j<4; j++) {	
		printf("  %d",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n****Triangulo Inferior****");
	
	for(int i=0; i<4; i++) {
		for(int n=0; n<4; n++) {
			if(i>n) {
				
				contador++;
				printf("  %d",matriz[i][n]);
				soma += matriz[i][n];
			}
		}
		printf("\n");
	}
	mediaTInf = soma/contador;
	printf("\n A media dos valores do triangulo inferior eh: %.2f", mediaTInf);		
	return 0;
}
