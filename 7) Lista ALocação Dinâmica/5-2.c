#include <stdio.h>
#include <stdlib.h>

struct PESSOA
{	char nome[50], data[8], CPF[11];
};

typedef struct PESSOA pessoa;

void preencher(pessoa *p)
{	printf("Nome: "); fgets(p->nome,50,stdin);
	printf("Data: "); fgets(p->data,8,stdin);
	printf("CPF: "); fgets((*p).CPF,11,stdin);
}

void exibir(pessoa *p)
{	printf("\nExibindo:\n");
	printf("Nome: %sData: %s CPF: %s",p->nome,p->data,p->CPF);
}

int main()
{	pessoa *p = malloc(sizeof(pessoa));
	
	preencher(p);
	exibir(p);
}	
