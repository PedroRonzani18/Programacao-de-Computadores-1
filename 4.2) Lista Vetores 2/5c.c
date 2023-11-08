#include <stdio.h>
#include <stdlib.h>

void exibir(int v[], int t)
{     int i=0;

      while(i<t)
      {     printf("%d, ",v[i]);
            i++;      
      }
      printf("\n");
}

int quantesp(char s[])
{     int i=0, c=0;
      
      while(s[i] != '\0')
      {     if(s[i]==' ') c++;
            i++;      
      }
      return c;
}

void branco(int v[], int t)
{     int i=0;

      while(i<t)
      {     v[i] = 0;
            i++;      
      }
}

void posiesp(char s[], int v[], int t)
{     int i=0, c=1;

      v[0]=-1;
      while(c<t)
      {     if(s[i]==' ')
            {     v[c] = i;
                  c++;            
            }
            i++;      
      }
}

int alitera(char s[], int v[], int t)
{     int i=0, c=0;
      printf("\nt = %d\n",t);
      while(i<t-2) //Confere todos os elementos 
      {           printf("s[v[i]+1] = %c || s[v[i+1]+1] = %c || i = %d|| c = %d\n",s[v[i]+1], s[v[i+1]+1],i,c);
                  while(s[v[i]+1]==s[v[i+1]+1])
                  {     i++;   
                        printf("Teste1\n");
                        printf("i = %d\n",i);
                  }
                  i++;
                  c++;
                  if(i>t-2) return c;
                  printf("Teste2\n");
      }
}

int main()
{     char s[100];
      
      printf("Digite a frase: ");
      fgets(s,100,stdin);
      
      int t = quantesp(s);

      int v[t+1]; //+1 pq tem que testar o primeiro caso
      
      branco(v,t+1);//preenche com 0
      
      printf("Vetor branco: ");
      exibir(v,t+1);
      
      posiesp(s,v,t+1); //if(s[i]= ' ') v[c] = i c++;
                    //armazena as posições dos espaços em v
                    
      printf("Vetor posições: ");
      exibir(v,t+1);
                    
     printf("Aliterações: %d",alitera(s,v,t)+1);     
}
