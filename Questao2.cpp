//Exercício2
#include <stdio.h>
#include <stdlib.h>
int main(){
	int estado;
	printf("\nLista de Estados:");
	printf("\n1 - AM");
	printf("\n2 - SP");
	printf("\n3 - RJ");
	printf("\n4 - Pa");
	printf("\n5 - RR");
	printf("\nEm qual estado voce nasceu? Digite apenas o numero equivalente ao estado: ");
	scanf("\n%d",&estado);
	switch(estado){
		case 1:
		printf("Voce eh Amazonense!");
		break;
		case 2:
		printf("Voce eh Paulista!");
		break;
		case 3:
		printf("Voce eh Carioca!");
		break;
		case 4:
		printf("Voce eh Paraense!");
		break;
		case 5:
		printf("Voce eh Roraimense!");
		break;
		default:
		printf("Voce inseriu um numero errado, tente novamente!");
	}
	return 0;
}

