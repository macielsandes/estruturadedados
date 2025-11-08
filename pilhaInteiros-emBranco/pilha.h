#define TAM_MAX 5 

typedef struct _pilha {
    int vetor[TAM_MAX];
    int topo;
} pilha;

void inicializar();
int verificarVazia();
int verificarCheia();
void push(int dado);
void imprimir();
int pop();

//Funcoes para testes automatizados
void testar1_VaziaPilha();
void testar2_InserirPilha(int quant);
void testar3_RemoverPilha();
void testar4_RemoverPilha(int quant);
