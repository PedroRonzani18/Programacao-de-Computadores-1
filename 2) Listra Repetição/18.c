#include <stdio.h>

main(){
    int numero, comparador_g, comparador_p, num;
    int contador=0;

    do{ contador=contador+1;

	printf("Digite o %do numero: ",contador);
    scanf("%d",&numero);

	if (contador == 1) num = numero;

	if (contador == 2)
    {   if (num > numero)
        {   comparador_g = num;
            comparador_p = numero;
        }

        if (num < numero)
        {   comparador_p = num;
            comparador_g = numero;
        }
	}

	if (contador >= 3)
    {   if (numero > comparador_g) comparador_g = numero;
        if (numero < comparador_p) comparador_p = numero;
	}

    } while(contador<5);

    printf ("Maior = %d\nMenor = %d",comparador_g,comparador_p);
}
