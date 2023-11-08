#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f1 = fopen("numerost.txt","w");	
	FILE *f2 = fopen("numerosb.txt","wb");

	int v[100];

	for(int i=0; i<100; i++) v[i] = 10000 + rand()%89999;
	
	for(int i=0; i<100; i++) fprintf(f1,"%d",v[i]);
	fwrite(v,sizeof(int),100,f2);
	
	fseek(f1,-1,SEEK_END); printf("t1 = %ld\n",ftell(f1));
	fseek(f2,-1,SEEK_END); printf("t2 = %ld\n",ftell(f2));
}
