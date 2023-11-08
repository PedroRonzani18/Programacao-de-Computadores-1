#include <stdio.h>

main(){

	int n=1;

	while (n%5!=0 || n%7!=0 || n%9!=0 || n%11!=0 || n%13!=0 || n%16!=0 || n%17!=0 || n%19!=0) n++;
	/* se fosse &&, a aprtir do momento em que ele se tornou divisivel por 5, um dos
	integrantes se tornou falto, fazendo que a estruturuta inteira se tornasse falsa = termina programa*/

	printf ("Numero = %d",n);
}
