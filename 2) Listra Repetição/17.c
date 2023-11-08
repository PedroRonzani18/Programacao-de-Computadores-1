#include <stdio.h>

main(){

	int n1=1, n2=1, n3=1, soma;

	printf ("Escreva o valor da soma dos 3 dados: ");
	scanf ("%d",&soma);


    while (n1<soma && n1>0 && (soma-(n1+n2))>=0)
    {	printf ("(%d,%d,%d) ",n1,n2,soma-(n1+n2));
        n1++;}

    while (n2<soma && n2>0 && (soma-(n1+n2))>=0)
    {	printf ("(%d,%d,%d) ",n1,n2,soma-(n1+n2));
        n2++;}

    while (n2<soma && n3>0 && (soma-(n1+n2))>=0)
    {	printf ("(%d,%d,%d) ",n1,n2,soma-(n1+n2));
        n3++;}

}


