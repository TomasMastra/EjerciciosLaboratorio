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

int main(void) {//Mastrapasqua Tomas

	setbuf(stdout,NULL);
	int numero1;
	int numero2;
	int suma;



	printf("Ingrese un numero: ");
	scanf("%d", &numero1);
	while(numero1 <-9 || numero1>100)
	{
		printf("Ingrese un numero: ");
			scanf("%d", &numero1);
	}

	printf("Ingrese un numero: ");
	scanf("%d", &numero2);
	while(numero2 <-9 || numero2>100)
	{
		printf("Ingrese otro numero: ");
		scanf("%d", &numero2);
	}

	suma = numero1 + numero2;

	printf("La suma es %d",suma);
}
