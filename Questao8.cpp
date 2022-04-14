//Exercício8
#include <stdio.h>
#include <stdlib.h>
int main(){
int num, c=0, a;
	do{
	printf("\nDigite um numero: ");
	scanf("%d",&num);
	if(num>5){
	c++;
	}
	printf("\nDeseja continuar? 1-SIM 2-NAO : ");
	scanf("%d",&a);
	}while(a!=2);
	printf("\nA quantidade de numeros maiores que 5 eh: %d",c);
	return 0;
}
