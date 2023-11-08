#include <stdio.h>

int main()
{     int v[1000], n, i=0, c=0;

      printf("Digite o limite: ");
      scanf("%d",&n);
      
      while(i<1000)
      {           while(i<n)
                  {     v[c] = i;
                        printf("v[%d] = %d\n",c,i);getchar();
                        i++;
                        c++;
                  }
                  i=0;
      }
}
