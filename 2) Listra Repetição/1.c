/*Exercícios 01 e 02 - Lista Repetição*/

#include <stdio.h>

main(){

	float numero, contador=0, soma=0, media=0;

	while (contador<10){
		contador++;
		numero ++;

		printf ("Digite um numero: ");
		scanf("%f",&numero);

		soma = soma + numero;
		media = soma / contador;
		printf ("\nSoma = %.0f\nMedia = %.2f\nNumeros Digitados = %.0f\n\n",soma,media,contador);
	}
}
