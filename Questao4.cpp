//Exercício 4
#include <stdio.h>
#include <stdlib.h>
int main(){
float valor_pago, troco, valor_compra, ja, jp, jb;
int jeans,op;
do{
	printf("Bem vindo ao Jeans Store");
	printf("\n 1- Jeans Azul R$100,00");
	printf("\n 2- Jeans Preto R$110,00");
	printf("\n 3- Jeans Branco R$120,00");
	printf("\n Qual jeans voce deseja comprar?");
	scanf("%d",&jeans);
	if(jeans==1){
		printf("\nVoce escolheu o jeans azul!");
		printf("\nValor R$100,00");
		ja=100.00;
	}
	else if (jeans==2){
		printf("\nVoce escolheu o jeans preto!");
		printf("\nValor R$110,00");
		jp=110.00;
	}
	else if (jeans==3){
		printf("\nVoce escolheu o jeans branco!");
		printf("\nValor R$120,00");
		jb=120.00;
	}
	printf("\nFinalizar compra? 1-SIM, 2-NAO : ");
	scanf("%d",&op);
	}while(op!=1);
	if(ja==100.00 && jp==110.00){
	valor_compra = 100.0+110.0;
		printf("\nValor total da compra eh: %.2f",valor_compra);
		printf("\nVoce deseja troco para quanto? ");
		scanf("%f",&valor_pago);
		troco=(valor_pago-valor_compra);
		printf("\nSeu troco eh de: %2.f", troco);
	}
	else if(ja==100.00 && jb==120.00){
	valor_compra=100.00+120.00;
	printf("\nValor total da compra eh: %.2f",valor_compra);
	printf("\nVoce deseja troco para quanto? ");
	scanf("%f",&valor_pago);
	troco=(valor_pago-valor_compra);
	printf("\nSeu troco eh de: %2.f", troco);
	}
	else if(jp==110.00 && jb==120.00){
	valor_compra=110.00+120.00;
	printf("\nValor total da compra eh: %.2f",valor_compra);
	printf("\nVoce deseja troco para quanto? ");
	scanf("%f",&valor_pago);
	troco=(valor_pago-valor_compra);
	printf("\nSeu troco eh de: %2.f", troco);
	}
	else{
	valor_compra=100.00+110.00+120.00;
	printf("\nValor total da compra é: %.2f",valor_compra);
	printf("\nVoce deseja troco para quanto? ");
	scanf("%f",&valor_pago);
	troco=(valor_pago-valor_compra);
	printf("\nO seu troco eh de: %2.f", troco);
	}
return 0;
}
