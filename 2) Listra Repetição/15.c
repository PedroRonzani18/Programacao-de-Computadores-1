#include <stdio.h>

main(){

	int soma=0, n1=1, n2=0, n3=-1, n4= -2, validade=1;

	while (validade == 1)
	{	if (n2==0)
		{	soma = soma + n1; /* soma = 1 */
			n1++;      /* n1= 2 */
			n2=n1-1;   /* n2= 1 */
			n3=n1-2;   /* n3= 0 */
			n4=n1-3;   /* n4= -1 */
		}

		if (n3==0)
		{	soma = soma + n1; /* soma = 3 */
			n1++;      /* n1= 3 */
			n2=n1-1;   /* n2= 2 */
			n3=n1-2;   /* n3= 1 */
         	        n4=n1-3;   /* n4= 0 */
		}
		validade = 0;
	}

	while (n1<4000000)
	{   if (n1%2==0) soma = soma + n1; /* soma = 6 */
	    n3 = n2; /* n3 = 2 */
	    n2 = n1; /* n2= 3 */
	    n1 = n1 + n3; /* n3 virou o antigo n2 */
	}

	printf ("Soma = %d",soma);
}
