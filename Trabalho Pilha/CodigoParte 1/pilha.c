#include <stdio.h>
#include "pilha.h"
#include <string.h>
#include <time.h>
#include <math.h>
#define tamanho 50000

typedef struct pilha{
	int vetor[tamanho];
	int topo;
} Pilha;

Pilha p;

void inicializar() {
	p.topo = -1;
}

int verificarVazia() {
	if(p.topo == -1)
		return 1;
	else return 0;
}

//Verificar se a pilha não esta cheia
int verificarCheia(){
	if(p.topo == tamanho -1)
		return 1;
	else return 0;
}

void inserir(int numero) {
	//verificar se a pilha nao esta cheia
	if(!verificarCheia()) {
		p.topo++;
		//insere elemento no top da pilha
    	p.vetor[p.topo] = numero;
    	//atualiza o fim da pilha
    
	} else {
		printf("Nao eh possivel inserir elemento na pilha, pois ela estah cheia");
	}
}

int remover() {
	//verificar se a pilha nao esta vazia
	if(!verificarVazia()) {
		//declara uma variavel auxiliar
	    int aux;
		//obtem o valor a ser removido do fim da pilha
	    aux = p.vetor[p.topo];
		//atualiza o fim da pilha
		p.topo--;
		return aux;
	}
	else {
		printf("A fila estah vazia.");
		return 0;
	}
}

void imprimir() {
	//verificar se a pila nao esta vazia
	if(!verificarVazia()) {
		int i;
		//percorre o vetor do inicio ao fim
		for(i = p.topo - 1; i >= 0; i--) {
			printf("%d\n ", p.vetor[i]);
		}
	} 
	else {
		printf("A pilha estah vazia.");
	}
}

int numeroAleatorio(int low, int high) {
    int k;
    double d;
    d = (double) rand () / ((double) tamanho + 1);
    k = d * (high - low + 1);
    return low + k;
}

int obterDado() {
	return numeroAleatorio(0, tamanho);
}

void exibirDado(int numero) {
	printf("\nElemento: %i", numero);
}
