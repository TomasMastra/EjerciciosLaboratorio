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

	int numero1;
    int numero2;
	int numero3;

	int numeroMedio;

	printf("Ingrese un numero: ");
	scanf("%d", &numero1);
	printf("Ingrese un numero: ");
	scanf("%d", &numero2);
	printf("Ingrese un numero: ");
	scanf("%d", &numero3);

	if((numero1>numero2 && numero1<numero3) || (numero1<numero2 && numero1>numero3))
	{
	    numeroMedio = numero1;
	}
	else
	if(numero2<numero3 && numero2>numero1)
	{
	    numeroMedio = numero2;
	}else
 	{
	    numeroMedio= numero3;
	}

	printf("El numero del medio es %d", numeroMedio);

	return EXIT_SUCCESS;
}
