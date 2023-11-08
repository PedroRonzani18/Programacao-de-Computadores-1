int soma (int n)
{	int i = 3, soma=0;
	while (i<=n)
	{	soma = soma + (5*i+2);
		i++;
	}
	return soma;
}


int main()
{	int n;

	printf("Digite um valor para n: ");
	scanf("%d",&n);

	printf ("soma = %d",soma(n));

}
