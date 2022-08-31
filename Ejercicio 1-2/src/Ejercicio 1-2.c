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
	int numero[3];
	int numeroMayor=0;
	int i;
	int bandera=0;

	for(i=0; i<3; i++){
	printf("Ingrese un numero: ");
	scanf("%d", &numero[i]);


	if(bandera==0)
	{
		numeroMayor=numero[i];
		bandera=1;

	}
	else
	if(numero[i]>numeroMayor)
	{
		numeroMayor=numero[i];
	}


	}



	printf("el numero mas grande es: %d ", numeroMayor);

	return EXIT_SUCCESS;
}
