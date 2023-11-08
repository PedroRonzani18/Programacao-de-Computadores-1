#include <stdio.h>

main(){

	int n1,n2,n3,f,m;

	printf("Digite suas notas e faltas: ");
	scanf("%d %d %d %d",&n1,&n2,&n3,&f);

	m = (n1 + n2 + n3)/3;

	if (m>=60 && f<=18) printf ("Aprovado\n\n");
	if (m<60 && f<=18) printf ("Reprovado por media\n\n");
	if (m>=60 && f>18) printf ("Reprovado por falta\n\n");
	if (m<60 && f>18) printf ("Reprovado por falta e media\n\n");

}
