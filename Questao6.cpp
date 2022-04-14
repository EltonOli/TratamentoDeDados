//Exercíco6
#include <stdio.h>
#include <stdlib.h>
int main(){
int num=1, qn1, qn2, qn3, qn4;
while(num>=0){
	printf("\nDigite um numero:");
	scanf("%d",&num);
	if (num>=0 && num<=25){
	qn1++;
	}
	else if(num>=26 && num<=50){
	qn2++;
	}
	else if(num>=51 && num<=75){
	qn3++;
	}
	else if(num>=76 && num<=100){
	qn4++;
	}
}
printf("\nA quantidade de numeros entre 0 e 25 eh: %d",qn1);
printf("\nA quantidade de numeros entre 26 e 50 eh: %d",qn2);
printf("\nA quantidade de numeros entre 51 e 75 eh: %d",qn3);
printf("\nA quantidade de numeros entre 76 e 100 eh: %d",qn4);
return 0;
}

