#include <stdio.h>
#include <stdlib.h>

void zero(int v[])
{     int i=0;

      while(i<26)
      {     v[i] = 0;
            i++;      
      }
}

void exibir(int v[])
{     int i=0;
      
      while(i<26)
      {     printf("%d, ",v[i]);
            i++;      
      }
      printf("\n");
}

int maior(int v[], int mai[])
{     int i=0, maior=-1;

      while(i<26)
      {     if(v[i] > maior) maior = v[i];
            i++;      
      }
      i=0; 
      
      while (i<26)
      {     if(v[i]==maior) mai[i]=1;
            i++;      
      }
}

char numch(int num)
{     char alf[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','w','y','z'};

      return alf[num-1];
}

void freq(char s[])
{     int i=0, j=0, va=1, c=0;
      int v[26], mai[26];
      char alf[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','w','y','z'};

      zero(v);
      zero(mai);
      
      while(s[i] != '\0')  //Coloca em v[] a quantidade de vezes que aparece uma letra
      {     while(va==1)
            {     if (s[i] == alf[j]) 
                  {     v[j]++;
                        va=0;
                  }
                  j++;                  
            }
            j=0;
            va=1;
            i++;       
      }

      maior(v,mai);
      
      printf("Letras: ");
      while(c<26)
      {     if(mai[c]==1) printf("%c",numch(c+1));
            c++;
      }
      printf("\n");

}

int main()
{     int n, i=0;
      char s[200];

      printf("Digite a quantidade de frases: ");
      scanf("%d",&n);
      getchar();
     
      while(i<n)
      {     printf("\nDigite a frase: ");
            fgets(s,200,stdin); 
            freq(s);
            i++;
      }
      
}
