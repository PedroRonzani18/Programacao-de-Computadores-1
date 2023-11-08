#include <stdio.h>
#include <stdlib.h>

struct PESSOA
{	char nome[50];
	char data[8];
	char CPF[11];
};

typedef struct PESSOA pessoa;

void preencher(pessoa *p)
{	printf("Nome: "); fgets(p->nome,50,stdin);
	printf("Dia: "); fgets(p->data,8,stdin);
	printf("CPF: "); fgets(p->CPF,11,stdin);	
}

void exibir(pessoa *p)
{	printf("Exibindo:\n\n");
	printf("Nome: %sDia: %sCPF: %s",p->nome,p->data,p->CPF);
}

int main()
{	pessoa *p = malloc (sizeof(pessoa));

	preencher(p);
	exibir(p);
}
