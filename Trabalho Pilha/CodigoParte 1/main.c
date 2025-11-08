#include <stdio.h>
#include <string.h>
#include "pilha.h"

int main(int argc, char *argv[]) {
	
	double start, finish, elapsed;
	int opcao, numero, i, quantidade;
	
	printf("Digite a quantidade de elementos para testar: ");
	scanf("%d", &quantidade);
	
	inicializar();
	do {
		printf("\n MENU ");
		printf("\n1. Inserir %d elementos na pilha", quantidade);	
		printf("\n2. Remover %d elementos na pilha", quantidade);
		printf("\n3. Imprimir a pilha");
		printf("\n4. Inicializar pilha");
        printf("\n5. Sair");
		printf("\nDigite a opcao: ");
		scanf("%d", &opcao);
		
		switch(opcao) {
			case 1:
				inicializar();
				start = (double) clock();
				for(i = 0; i < quantidade; i++) {
					numero = obterDado();
  			    	inserir(numero);
  			    	exibirDado(numero);
  				}
  				finish = (double) clock();
  				elapsed = finish - start;
  				printf("\nForam utilizados %.2f clocks", elapsed);
                break;
            case 2:
            	inicializar();
            	for(i = 0; i < quantidade; i++) {
					numero = obterDado();
  			    	inserir(numero);
  			    	
  				}
            	start = (double) clock();
            	for(i = 0; i < quantidade; i++) {
					numero = remover();  			
  			    	exibirDado(numero);	
  				}            	
				finish = (double) clock();
  				elapsed = finish - start;
  				printf("\nForam utilizados %.2f clocks", elapsed);
				break;
			case 3:
				inicializar();
            	for(i = 0; i < quantidade; i++) {
					numero = obterDado();
  			    	 inserir(numero);
  				}
				start = (double) clock();
               	imprimir();
				finish = (double) clock();
  				elapsed = finish - start;
  				printf("\nForam utilizados %.2f clocks", elapsed);
				break;
			case 4:
				inicializar();
				break;
			case 5:
				printf("\nEncerrando o programa...");
				break;
			default:
				printf("\nOpcao invalida. Escolha um numero de 1 a 5.");
		}
		
	} while(opcao != 5);
}
