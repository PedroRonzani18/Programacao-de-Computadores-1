#include <stdio.h>

int bissexto (int n)
{	if (n%400==0) return 1;
	else return 0;
}

main()
{   int mes, ano, dia, soma=0;

	printf ("Escreva uma data: ");
	scanf("%d %d %d",&dia,&mes,&ano);

       while (mes>0)
       {    mes--;
            if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
                    soma = soma + 31;
            if (mes==4 || mes==6 || mes==9 || mes==11)
                    soma = soma + 30;
            if (mes==2)
            {   if (bissexto(ano)==1)
                    soma = soma + 29;
                else soma = soma + 28;
            }
        }
        soma =  soma + dia-1;
        printf ("Dias passados = %d",soma);
}

