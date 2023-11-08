#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Matriz de distâncias
  int matrix[5][5] = {
  00, 15, 30, 05, 12,
  15, 00, 10, 17, 28,
  30, 10, 00, 03, 11,
  05 ,17 ,03 ,00 ,80,
  12 ,28 ,11 ,80 ,00};
  
  FILE * matrix_file = NULL;

  if((matrix_file = fopen("matrix.txt","wb")) == NULL)
    return 1;
  
	for(int i = 0; i < 5; i++)
	{	for(int j = 0; j<5;j++)
		{	fwrite(&matrix[i][j],sizeof(int),1,matrix_file); 
		}
	}
      
  
  fclose(matrix_file);

  return 0;
}
