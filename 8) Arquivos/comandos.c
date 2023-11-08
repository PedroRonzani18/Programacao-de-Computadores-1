FILE *f;

f = fopen("nome","w" ou "r");

EOF = fim do arquivo (do tipo char)
NULL = erro

Arquivos de texto:

1)	fputc(char ch, FILE *f)
		//escreve ch em arquivo
		//(ch,f);
		
2)	fputs(char *str, FILE *f)
		//escreve string em arquivo
		//(s,f);	
		
3)	fgetc(FILE *f)
		//lê um ch num arquivo
		//(f);
		
4)	fgets(char *str, int tamanho, FILE *f)
		//lê string de um arquivo
		//coloca numa string no maximo 
		//(s,100,f);
		
Arquivo Binário:

1)	fwrite(void *buffer, sizeof(tipo), int quant, *f)
		//escreve bloco de bytes em um arquivo binário]
		//guardar o numero em formato int (como NUMERO)
		//buffer = origem dos dados
		//f = destino dos dados
		
2)	fread(void *buffer, sizeof(tipo), int qunat, *f)
		//lê bloco de bytes de um arquivo
		//coloca no buffer
		
3)	fscanf(FILE *f, "tipos de entrada", variaveis);
		//só funciona com caracter

4)	fprintf(f, "texto", variaveis);
		//escreve no arquivo
		//escreve como caracter
		
5)	fseek(f, bytes, origem);
		//bytes = bites a serem pulados
		//origem = SEEK_SET / SEEK_CUR / SEEK_END
		
6)	int x = ftell(f);
		//quantidade de bytes existentes no arquivo ate aquele ponto
