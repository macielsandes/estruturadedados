#include <stdio.h>
#include "pilha.h"

pilha p;

void inicializar() {
}

int verificarVazia() {
}

int verificarCheia() {
}

void push(int dado) {
	//verificar se a pilha nao estah cheia
        //atualiza o topo da pilha
        //insere o elemento no vetor na posicao topo
    //se estiver cheia, informa o usuario
}

void imprimir() {
    //verificar se a pilha nao esta vazia
        //define uma variavel auxiliar
        //percorre o vetor do topo ate a base
            //imprimir o elemento na posicao
        //se estiver vazia, informa o usuario
}

int pop() {
    //verificar se a pilha nao estah vazia
        //define variavel aux
        //aux ira guardar o elemento do topo da pilha
        //atualiza o topo da pilha
        //retorna numero removido
    //se estiver vazia, informa o usuario
}


//Funcoes para testes automatizados
void emitirResultado(int resultado) {
	if(resultado) 
		printf("\nGREEN: Passou!");
	else printf("\nRED: Nao passou!");
}

void testar1_VaziaPilha(){
	printf("\nTeste 1: Este teste irah verificar a pilha vazia");
	inicializar();
	if(verificarVazia()) {
		emitirResultado(1);
	} else emitirResultado(0);
}

void testar2_InserirPilha(int quant){
	int numeros[quant], i, quantInserido;
	printf("\nTeste 2: Este teste irah inserir %d elementos na pilha", quant);
	if (quant > TAM_MAX)
		printf(", e terah que dizer que a pilha estah cheia, inserindo somente os %d primeiros", TAM_MAX);
	for(i = 0; i < quant; i++)
		numeros[i] = i+1;

	inicializar();
	for(i = 0; i < quant; i++)
		push(numeros[i]);
	
	quantInserido = quant;
	if(quant > TAM_MAX)
		quantInserido = TAM_MAX;
	
	for(i = 0; i < quantInserido; i++)
		if(p.vetor[i] != numeros[i]) {
			emitirResultado(0);
			return;
		}
	emitirResultado(1);
}

void testar3_RemoverPilha(){
	int removido = 0;
	printf("\nTeste 3: Este teste irah tentar remover de uma pilha vazia");
	inicializar();
	removido = pop();
	if(verificarVazia())
		emitirResultado(1);
	else emitirResultado(0);
}

void testar4_RemoverPilha(int quant){
	int removido = 0, i, numeros[quant], quantInserido;
	printf("\nTeste 4: Este teste irah inserir %d elemento na pilha e remove-lo, deixando a pilha vazia", quant);
	for(i = 0; i < quant; i++)
		numeros[i] = i+1;
	
	inicializar();
	for(i = 0; i < quant; i++) {
		push(numeros[i]);
	}
	
	quantInserido = quant;
	if(quant > TAM_MAX)
		quantInserido = TAM_MAX;
	
	for(i = 0; i < quantInserido; i++) {
		removido = pop();
		if(removido != numeros[quantInserido-i-1]) {
			emitirResultado(0);
			return;
		}
	}
	//verifica se a pilha ficou vazia
	if(verificarVazia())
		emitirResultado(1);
	else emitirResultado(0);
}
