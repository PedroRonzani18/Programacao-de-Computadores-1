#include <stdio.h>

void exibir(int v[])
{     int i=0;
      
      while(i<10)
      {     printf("%d, ",v[i]);
            i++;      
      }
      printf("\n");
}

void preencher(int v[], int n)
{     int i=0;

      while(i<10)
      {     v[i] = n;
            i++;      
      }
}

int numero(int num[])
{     int i=0;

      while(num[i] != -1)
      {     i++;      
      }
      return i;
}


void numeros_e_quant(int num[], int quant[], int n)
{     int i=0, aux, cont=0, v1=1;

      while(cont<n)
      {     printf("Numero: ");
            scanf("%d",&aux);
            
            while(v1==1)
            {     if((aux!=num[i]) && (num[i]==-1)) //se for numero novo, add no num
                  {     num[i] = aux;         
                        v1=0;
                  }
                  if((aux==num[i]) && (num[i]!=-1)) v1=0;//se for igual a num, quant++
                  if (v1==1) i++;  
            }
            quant[i]++;
            i=0;
            v1=1;
            cont++;
      }
}

void freq(int num[], int quant[], int n)
{     int i=0;

      while(i<n)
      {     if (quant[i]==1) printf ("%d aparece 1 vez\n",num[i]);
            else printf("%d aparece %d vezes\n",num[i],quant[i]);
            i++;      
      }

}

int main()
{     int n, i=0, aux, cont=0, v=0;

      int num[10];//armazena os tipos de numeros inseridos
      preencher(num,-1);
      
      int quant[10];//amrmazena a quant de vezes que numeros aparecem
      preencher(quant,0);
      
      printf("Quantidade de numeros: ");
      scanf("%d",&n);
      
      numeros_e_quant(num,quant,n); //cria vetores com numeros e suas frequencias
      //printf("Num: "); exibir(num);                      DEBUG
      //printf("Quant: "); exibir(quant);printf("\n");     DEBUG
      
      freq(num,quant,numero(num));

}
