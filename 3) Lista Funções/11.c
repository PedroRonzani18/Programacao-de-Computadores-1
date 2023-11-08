#include <stdio.h>

int potencia(int x, int n)
{	int produto=1;

	while (n>0)
	{	produto = produto * x;
		n--;
	}
	return produto;
}

int main(){

    int x,n;

    printf ("Escreva x e n");
    scanf("%d %d",&x,&n);

    printf("%d ^ %d = %d",x,n,potencia(x,n));

}
