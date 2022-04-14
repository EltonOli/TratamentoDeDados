//Exercício 1
#include <stdio.h>
#include <stdlib.h>
int main(){
	float peso, altura, imc;
	printf("\nFeito por: Elto de Oliveira");
	printf("\nDigite o seu peso: ");
	scanf("%f",&peso);
	printf("\nDigite a sua altura: ");
	scanf("%f",&altura);
	imc = peso/(altura*altura);
	if(imc<18.5){
		printf("\nO seu IMC eh: %.2f\n", imc);
		printf("\nVoce esta abaixo do peso!");
	}else if (imc>=18.5 && imc <=25){
		printf("\nO seu IMC eh: %.2f\n", imc);
		printf("Voce esta com peso normal!");
	}else if(imc>=25 && imc<=30){
		printf("\nO seu IMC eh: %.2f\n", imc);
		printf("Voce esta acima do peso!");	
	}else{
		printf("\nO seu IMC eh: %.2f\n", imc);
		printf("Voce esta obeso!");
	}	
	return 0;
}
