//Crie um algoritmo que simule um estacionamento com 20 espaços.Faça uma forma de simular uma ocupação de uma vaga e faça o liberar vaga. 

#include<stdio.h>
#include<stdlib.h>
	
	int main(void) {
	int estac[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};                                                               
	int vaga, posicao, contVaga, fim;                                                      
	
	printf("\n**********Vagas do Estacionamento*************\n\n"); 
	
	for(int i=0; i<20; i++) {                                                          
		printf("  %d", estac[i]);                                                        
	}
	do{                                                                                    
		                                                                 
	printf("\nDigite a opcao desejada: 1- para ocupar a vaga ou  0- para liberar a vaga\n:");                            
	scanf("%d",&vaga);                                                                      
	
	if(vaga==1) {                                                                        
		printf("\nQual vaga vc deseja ocupar: ");                               
		scanf("%d",&posicao);                                                              
		
			estac[posicao-1]=1;                                                        
			
		printf("\n********** vagas do Estacionamento **********\n\n");
 	
	for(int i=0; i<20; i++) {                                                                 	
		printf("  %d", estac[i]);                                                        
	}
		printf("\nPosicao %d esta ocupada\n", posicao);                                     
		
	}
	if(vaga==0){                                                                         
		
		for(int i=0; i<20; i++) {                                                        
			
			contVaga += estac[i];                                                        
		
		if(contVaga==0 ){                                                                
			printf("\nTodas as vagas ja estao liberadas\n");                               
			break;                                                                         
		}
		else{                                                                         
			printf("\nInforme qual vaga vc deseja liberar: ");                             
		scanf("%d",&posicao);                                                              
		
		estac[posicao-1] = 0;                                                           
			
		printf("\n===================== vagas ======================================\n\n"); 
	
	for(int i =0; i<20; i++) {                                                           
		
		printf("  %d", estac[i]);                                                         
	}
		printf("\nPosicao %d esta liberada\n", posicao);                                      
		
	}
		}
	}
		
	
}while(fim != 0);
	return 0;
}
