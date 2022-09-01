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
	int menor;
	int mayorPar;
	int flagMayorPar = 0;
	int flagMenor = 0;
	int productoNegativos = 0;
	int lugarMayorNumero;
	int i;
	int mayor = 0;
	int flag=0;


	for(i=0;i<10;i++)
	{
		printf("Ingrese un numero:");
		scanf("%d", &numero);

		if(flagMenor == 0)
		{
			menor = numero;
			flagMenor=1;
		}else
			if(numero<menor)
			{
				menor= numero;
			}

		if(flagMayorPar == 0 && numero%2==0)
		{

			mayorPar = numero;
			flagMayorPar=1;

		}else
			if(numero>mayorPar && numero%2==0)
			{
				mayorPar= numero;
			}

		if(numero>mayor)
				{
					lugarMayorNumero= i+1;//Para que no quede posicion 0 que quizas no queda tan bien
					mayor = numero;
				}

		if(numero<0)
		{
			if(flag==0)
			{
			productoNegativos=numero;
			flag=1;
			}else
			{
				productoNegativos= productoNegativos*numero;
			}
		}


	}


	printf("el menor numero ingresado es: %d\n", menor);
	printf("el mayor par ingresado es: %d\n", mayorPar);
	printf("el producto de los negativos es: %d\n", productoNegativos);
	printf("la posicion del numero mas grande es: %d\n", lugarMayorNumero);








	return EXIT_SUCCESS;
}
