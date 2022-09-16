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
#include "Funciones.h"

int main(void) {

	setbuf(stdout,NULL);

	char alfanumerico[21];
	int numero;

	getString(alfanumerico, "Ingrese una palabra: \n", "Ingrese una palabra: \n", 50);


	getInt(&numero, "Ingrese su numero de telefono: \n", "Ingrese su numero de telefono: \n", 10000000, 99999999);

	printf("Alfanumerico: %s\n", alfanumerico);
	printf("Numero: %d\n", numero);

	return EXIT_SUCCESS;
}
