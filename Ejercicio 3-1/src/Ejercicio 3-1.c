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

void MostrarEntero(int numero);

//Tomas Mastrapasqua
int main(void) {

	setbuf(stdout,NULL);
	int numero;
	numero = 7;
	MostrarEntero(numero);
	return EXIT_SUCCESS;
}

void MostrarEntero(int numero)
{
	printf("El numero es: %d\n", numero);
}
