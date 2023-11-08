#include <stdio.h>

void iniciais(char frase[], char letras[])
{     int f=1, l=1;

      letras[0] = frase[0];
      //printf("frase[%d] = %c || frase[%d] = %c\n",f,frase[f],f+1,frase[f+1]);
      //printf("letras[%d] = %c || l = %d\n\n",l,letras[l],l);

      while(frase[f] != '\0')
      {     //printf("frase[%d] = %c || frase[%d] = %c\n",f,frase[f],f+1,frase[f+1]);
            if(frase[f] == ' ') 
            {     letras[l] = frase[f+1];
                  l++;
            }
            //printf("letras[%d] = %c || l = %d\n\n",l,letras[l],l);
            f++;     
      }
}

void alitera(char letras[])
{     int i=0, cont=0;

      while(letras[i] != '\0')
      {     if (letras[i] == letras[i+1]) 
            {     cont++;
                  while(letras[i] == letras[i+1])
                  {     i++;                  
                  }
            }
            i++;
      }
      printf("Aliterações: %d\n",cont);
}

int main()
{     char frase[50], letras[50];

      printf("Frase: ");
      fgets(frase,50,stdin);
      //printf("Letras: %s\n",letras);  
      //printf("Frase: %s\n",frase);  
      
      iniciais(frase,letras);//Coloca as letras iniciais dentro de letras
      
      //printf("Letras: %s\n",letras);
      alitera(letras); 

}
