#include<stdio.h>

float multiplicar(float x, float y){
     return x*y;
}

void mostrar(float a, float b){
     printf("\nO resultado da multiplicacao de x * y = : %.2f", multiplicar(a, b));
}

main(){
     float a, b=0;

     printf("Digite o primeiro numero: ");
     scanf("%f", &a);
     printf("Digite o segundo numero: ");
     scanf("%f", &b);

     multiplicar(a,b);
     mostrar(a,b);
}

