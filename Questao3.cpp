//Exercício3
#include <stdio.h>
#include <string.h>
int main(){
	char nome[10], sexo[10];
	int idade;
	printf("\nDigite o seu nome:");
	scanf("%s",nome);
	printf("\nDigite o sexo F OU M:");
	scanf("%s",sexo);
	printf("\nDigite a sua idade:");
	scanf("%d",&idade);
	if (strcmp(sexo,"F")==0 && idade<25 ){
	printf("Aceita!");
	}else{
	printf("Nao Aceita!");
	}
	return 0;
}

