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

float MostrarEntero();

//Tomas Mastrapasqua
int main(void) {

	setbuf(stdout,NULL);
	float numero;
	numero = MostrarEntero();

	printf("%2.f", numero);
	return EXIT_SUCCESS;
}

float MostrarEntero()
{
	float numero;
	printf("Ingrese un numero: ");
	scanf("%f", &numero);

	return numero;
}
