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
//Mastrapasqua Tomas
int main(void) {

	setbuf(stdout,NULL);
	int numero;

	printf("Ingrese un numero: ");
	scanf("%d", &numero);

	if((numero%2)==0)
	{
		printf("El numero es par");
	}else
	{
		printf("El numero es impar");
	}

	return EXIT_SUCCESS;
}
