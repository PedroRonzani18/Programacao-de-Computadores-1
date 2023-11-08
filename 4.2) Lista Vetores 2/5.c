#include <stdio.h>
#include <stdlib.h>

void branco(int v[], int n)
{     int i=0;

      while(i<n)
      {     v[i] = 0;
            i++;      
      }
}

int espacos(char s[], int posi[])
{     int i=0, c=0;

      while(s[i] != '\0')
      {     if(s[i] == ' ') 
            {     posi[i] = 1;
                  c++;
            }
            i++;      
      }
      return c;
}

void exibir(int v[], int n)
{     int i=0;

      while(i<n-1)
      {     printf("%d, ",v[i]);
            i++;     
      }
      
      printf("%d\n\n",v[i]);
}

void lugar(int lug[], int posi[])
{     int i=0, p=1;

      lug[0] = 0;//o numero na posição 0 também será comparado
      while(i<30)
      {     if(posi[i]==1) 
            {     lug[p] = i+1;
                  p++;
            }      
            i++;      
      }
}

void alit(int lug[], char s[], int t)
{     int i=0, quant=0, c=0;

      while(i<t)//contador até quantidade de casos a serem testados
      {     if(s[lug[i]] == s[lug[i+1]])  //se char sequentes iguais => aumenta
            {    quant++;
                 while(s[lug[i]]==s[lug[i+1]]) 
                 {      i++;
                        printf("1111111\n");
                 }
            }   
            printf("22222222222\n");
            getchar();
            printf("i = %d\n",i);
      }
      printf("Aliterações: %d\n",quant); 
}

void main(void)
{     char s[30];
      printf("Digite a frase: ");
      fgets(s,30,stdin);

      int posi[30]; //v[] com 1 nas posições dos espaços      
      branco(posi,30);
      printf("\nPosi branco: ");
      exibir(posi,30);
      
      int x = espacos(s,posi); //Conta e coloca em posi[] a quantidade de espaços da string

      printf("Posi esp: "); //Posi com 1 na posição dos espaços
      exibir(posi,30);
     
      int lug[x+1]; //v[] com as posições dos espaços
      branco(lug,x+1);
      
      printf("Lug branco: ");
      exibir(lug,x+1);
      
      lugar(lug,posi);
      
      printf("Lug posiç: ");
      exibir(lug,x+1);
      
      alit(lug,s,x);

}
