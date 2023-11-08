#include <stdio.h>

int produto(int x, int y)
{	int contador=0,soma=0;

	while (contador<y)
	{	contador++;
		soma = soma +x;
	}
	return soma;
}

int main(){

	int x,y;

	printf("Digite dois valores: ");
	scanf("%d %d",&x,&y);

	printf ("%d x %d = %d",x,y,produto(x,y));

}
