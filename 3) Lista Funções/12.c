#include <stdio.h>

float potencia(float x, float n)
{	float produto=1;

	while (n>0)
	{	produto = produto * x;
		n--;
	}
	return produto;
}

float val(float x, float t, float n)
{	float soma=0;
	float exp=0;

	while (exp<=n)
	{   soma = soma + (x/(potencia(1+t,exp)));
        exp++;
	}
	return soma;
}

int main()
{	float x,t,n;

	printf ("Digite os valores de x, t e n: ");
	scanf ("%f %f %f",&x,&t,&n);
	printf ("Val = %.3f",val(x,t,n));

}
