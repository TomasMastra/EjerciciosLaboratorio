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

	printf("Ingrese un numero entre 100 y 500: ");
	scanf("%d", &numero);
	MostrarEntero(numero);
	return EXIT_SUCCESS;
}

void MostrarEntero(int numero)
{
	if(numero>100 && numero<500)
	{
	printf("El numero es: %d\n", numero);
	}else
	{
		printf("El numero esta fuera del rango\n");
	}
}
