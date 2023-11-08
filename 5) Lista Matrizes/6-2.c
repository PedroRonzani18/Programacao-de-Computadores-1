#include <stdio.h>
#include <stdlib.h>

void preencher(int m[4][5])
{	int i=0, j=0;

	while (i<4)
	{	while (j<5)
		{	m[i][j] = rand()%11;
			j++;		
		}
		i++;
		j=0;	
	}
}

void exibirm(int m[4][5])
{	int i=0, j=0;

      printf("Matriz: \n");
	while (i<4)
	{	while (j<4)
		{	printf ("[%d] ",m[i][j]);
			j++;		
		}
		i++;
		j=0;
		printf ("\n");
	}
}

/*void exibirv(int v[])
{	int i=0;

	printf ("Vetor: ");
	while (i<20)
	{	printf ("%d, ",v[i]);
		i++;	
	}
	printf ("\n");
}*/

void matvet (int m[4][5], int v[])
{	int i=0, j=0, c=0;

	while (i<4)
	{	while (j<5)
		{	v[c] = m[i][j];
			c++;
			j++;		
		}
		i++;
		j=0;	
	}
}

/* void ordenar(int v[])
{	int c1=0, c2=19, aux=0;

	while (c1<c2)
	{	while (c1<c2)
		{	if(v[c1] > v[c2])
			{	aux = v[c1];
				v[c1] = v[c2];
				v[c2] = aux;
			}
			c1++;		
		}
		c1=0;
		c2--;	
	}
}*/

void terceiro (int v[])
{	int i=0, maiorG=-1, maior2=-1;
	int posi=0, cont=0;
	int c1=0, c2=19;

	while (i<20)
	{	if (v[i]>maiorG) maiorG = v[i];
		i++;	
	}
	i=0;
	
	printf ("\nDigite a posição do numero: ");
	scanf ("%d",&posi);
	
	if(posi==1) maior2=maiorG;
	
	else
      {     while(cont<posi-1)
            {     maior2=-1;
                  while(i<20)
                  {     if(maior2<v[i] && v[i]<maiorG) maior2 = v[i];
                        i++;      
                  }
                  cont++;
                  i=0;
                  maiorG=maior2;
            }
      }
      	
      printf("\n%dº maior: %d\n",posi,maior2);
}

int main()
{	int m[4][5];
	int v[20];

	preencher(m);
	exibirm(m);
	matvet(m,v);
	//exibirv(v);
	//ordenar(v);
	//exibirv(v);
	terceiro(v);
}
