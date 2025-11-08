/* após a explicação sobre os algoritmos para inserir, imprimir e remover um elemento da pilha, 
baixe o código disponível nessa atividade e programe as operações básicas inserir, remover e 
imprimir e as operações auxiliares inicializar, verificarVazia e verificarCheia da estrutura pilha que manipule números inteiros. 

As opções 5, 6 e 7 do menu servem para testar seu código e auxiliar a verificar se a sua implementação está correta. 
Caso o teste resulte em GREEN, quer dizer que passou no teste. Caso o teste resulte em RED, quer dizer que o código possui algum problema de lógica.

Submeta o seu código como resposta a essa atividade após ele ter passado (dado GREEN) em todos os testes.
Caso tenha perdido ou não compreendido alguma parte da aula, seguem vídeos explicativos:

*/


#include <stdio.h>
#include "pilha.h"

int main(int argc, char *argv[]) {
	int temp;
	int opcao;
	inicializar();

	do {
		//exibir o menu
		printf("\n    MENU");
		printf("\n1. Inicializar");
		printf("\n2. Inserir");
		printf("\n3. Remover");
		printf("\n4. Imprimir");
		printf("\n5. Realizar testes de inicializar a pilha");
		printf("\n6. Realizar testes de inserir na pilha");
		printf("\n7. Realizar testes de remover na pilha");
		printf("\n8. Sair");
		printf("\nDigite a opcao desejada: ");
		
		//ler a opcao desejada pelo usuario
		scanf("%d", &opcao);
		
		//processar a funcionalidade
		switch(opcao) {
			case 1:
				inicializar();
				break;
			case 2:
				printf("Digite o numero: ");
				scanf("%d", &temp);
				push(temp);
				break;
			case 3:
				temp = pop();
				printf("\nNumero removido: %d", temp);
				break;
			case 4:
				imprimir();
				break;
			case 5:
				testar1_VaziaPilha();
				break;
			case 6:
				testar2_InserirPilha(1);
				testar2_InserirPilha(2);
				testar2_InserirPilha(3);
				testar2_InserirPilha(4);
				testar2_InserirPilha(5);
				testar2_InserirPilha(6);
				testar2_InserirPilha(7);
				break;
			case 7:
				testar3_RemoverPilha();
				testar4_RemoverPilha(1);
				testar4_RemoverPilha(2);
				testar4_RemoverPilha(3);
				testar4_RemoverPilha(4);
				testar4_RemoverPilha(5);
				testar4_RemoverPilha(6);
				break;
			case 8:
				printf("Encerrando o programa...");
				break;
			default:
				printf("\nOpcao invalida. Escolha um numero valido de opcao.");
		}
		
	} while(opcao != 8);
}

