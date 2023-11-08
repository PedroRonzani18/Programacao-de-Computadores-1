#include <stdio.h>

main(){

	float x,y;
	char op;

	printf ("Escreva a operação desejada {x (*,/,+,-) y}: ");
	scanf("%f %c %f",&x,&op,&y);

	switch (op){
		case '+' : printf ("%.2f + %.2f = %.2f\n\n",x,y,x+y); break;
		case '-' : printf ("%.2f - %.2f = %.2f\n\n",x,y,x-y); break;
		case '*' : printf ("%.2f * %.2f = %.2f\n\n",x,y,x*y); break;
		case '/' : printf ("%.2f / %.2f = %.2f\n\n",x,y,x/y); break;
             }
}
