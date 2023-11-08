#include <stdio.h>

main()
{	float v,vo;
	int c100=0, c50=0, c20=0, c10=0, c5=0, c2=0, c1=0, c05=0, c025=0, c01=0, c005=0, c001 = 0;
	printf ("Escreva um valor (xx.xx): ");
	scanf("%f",&v);
	vo = v;

	while (v>=100)
	{	c100++;
		v = v - 100;}

	while (v>=50)
	{	c50++;
        v = v - 50;}

	while (v>=20)
	{	c20++;
		v = v - 20;}

	while (v>=10)
	{	c10++;
		v = v - 10;}

	while (v>=5)
	{	c5++;
		v = v - 5;}

	while (v>=2)
	{	c2++;
		v = v - 2;}

	while (v>=1)
	{	c1++;
		v = v - 1;}

	while (v>=0.5)
	{	c05++;
		v = v - 0.5;
	}

	while (v>=0.25)
	{	c025++;
		v = v - 0.25;}

	while (v>=0.1)
	{	c01++;
		v = v - 0.1;}

	while (v>=0.05)
	{	c005++;
		v = v - 0.05;}

	while (v>=0.01)
	{	c001++;
		v = v - 0.01;}

	printf ("Valor = %.2f \n",vo);
	printf ("NOTAS: \n");
	if (c100>0) printf ("%d nota de 100\n",c100);
	if (c50>0) printf ("%d notas de 50\n",c50);
	if (c20>0) printf ("%d notas de 20\n",c20);
	if (c10>0) printf ("%d notas de 10\n",c10);
	if (c5>0) printf ("%d notas de 5\n",c5);
	if (c2>0) printf ("%d notas de 2\n",c2);
	if (c1>0) printf ("%d notas de 1\n",c1);
	printf ("MOEDAS: \n");
	if (c05>0) printf ("%d moedas de 0.5\n",c05);
	if (c025>0) printf ("%d moedas de 0.25\n",c025);
	if (c01>0) printf ("%d moedas de 0.1\n",c01);
	if (c005>0) printf ("%d moedas de 0.05\n",c005);
	if (c001>0) printf ("%d moedas de 0.01\n",c001);

}
