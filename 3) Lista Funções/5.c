/*Quantidade de anos bissexos em um intevalo*/

int bissexto (int n)
{	if (n%400==0) return 1;
	else return 0;
}

main()
{	int contador=0, anos=0, x, y, x0;

	printf ("Digite dois anos: ");
	scanf ("%d %d", &x, &y);

	while (x<=y)
	{	if (bissexto(x)==1) anos++;
		x++;
	}

	printf ("A quantidade de anos bissextos entre %d e %d = %d\n",x0,y,anos);

}
