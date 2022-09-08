/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int DeterminarPar(int numero);

//Tomas Mastrapasqua
int main(void) {

	setbuf(stdout,NULL);
	int numero = 8;
	int par;
	par = DeterminarPar(numero);

	printf("%d\n",par);

	return EXIT_SUCCESS;
}

int DeterminarPar(int numero)
{
	int par = 0;

	if(numero%2==0)
	{
		par = 1;
		printf("Es par\n");
	}else
	{
		printf("No es par\n");
	}


	return par;
}
