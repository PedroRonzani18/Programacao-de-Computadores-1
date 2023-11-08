#include <Stdio.h>

main(){

	int linhas, c=0;

	printf("Determine o numero de linhas: ");
	scanf("%d",&linhas);

	while (c<linhas)
	{	c++;
		printf ("%d %d %d\n",c,c*c,c*c*c);
	}
}
