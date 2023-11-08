#include <stdio.h>
#include <stdlib.h>

int preencher(int m[4][5])
{     int i=0, j=0;

      while (i<4)
      {     while (j<5)
            {     m[i][j] = rand()%11;
                  j++;            
            }
            i++;
            j=0;      
      }
}

int exibirm(int m[4][5])
{     int i=0, j=0;
      
      printf("Matriz: \n");
      while (i<4)
      {     while (j<5)
            {     printf("[%d] ",m[i][j]);
                  j++;            
            }
            printf("\n");
            i++;
            j=0;
      }
      printf("\n");
}

int matvet(int m[4][5], int v[])
{     int i=0, j=0, c=0;

      while(i<4)
      {     while(j<5)
            {     v[c] = m[i][j];
                  j++;  
                  c++;          
            }
            i++;
            j=0;      
      }
}

int exibirv(int v[])
{     int i=0;

      printf("Vetor: ");
      while(i<20)
      {     printf("%d, ",v[i]);
            i++;
      }
      printf ("\n\n");
}

int maior(int v[])
{     int i=0, maior=-1;

      while(i<20)
      {     if(v[i]>maior) maior=v[i];
            i++;      
      }
      return maior;
}     

int igual(int v[])
{     int c1=0, c2=19;
      int x = maior(v)+1;

      while(c1<c2)
      {     while(c1<c2)
            {     if(v[c1]==v[c2]) 
                  {     v[c2] = x+1;
                        x++;
                  }
                  c1++;            
            }
            c2--;
            c1=0;      
      }
}

void vetmat(int v[], int m[4][5])
{     int i=0, j=0, c=0;

      while(i<4)
      {     while(j<5)
            {     m[i][j] = v[c];
                  j++;  
                  c++;          
            }
            i++;
            j=0;      
      }
}

int main()
{     int m[4][5], v[20];

      preencher(m);
      exibirm(m);
      matvet(m,v);
      exibirv(v);
      igual(v);
      exibirv(v);
      vetmat(v,m);
      exibirm(m);
}
