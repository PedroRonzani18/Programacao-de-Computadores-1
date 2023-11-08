#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f = fopen("texto3.txt","wb");

    int numero_conta;
    char nome[200];
    float saldo;
    float limite;
    char virgula = ',';

    for(int v=1; v==1;){
        
        printf("Preenchendo o banco de dados\n\n");
        printf("Numero da conta: "); scanf("%d",&numero_conta);
        printf("Nome: "); fgets(nome,200,stdin);
        printf("Saldo: "); scanf("%f",&saldo);
        printf("Limite: "); scanf("%f",&limite);    

        fwrite(numero_conta,sizeof(int),1,f); fwrite(virgula,sizeof(char),1,f);
        fwrite(nome,)
        

    }
}
