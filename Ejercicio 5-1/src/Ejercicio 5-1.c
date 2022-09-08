/*i
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

//Tomas Mastrapasqua

int DeterminarImpar(int numero);
int main(void) {

	setbuf(stdout,NULL);

	int numeros[5];
	int i;
	int sumatoria=0;

	for(i=0;i<5;i++)
	{
		printf("%d. Ingrese un numero: ", i+1);
		scanf("%d", &numeros[i]);
		sumatoria = sumatoria + numeros[i];

	}

	printf("La sumatoria es %d\n",sumatoria);


	printf("Numeros Impares: \n");
	for(i=0;i<5;i++)//Hacer en otra funcion
	{
		DeterminarImpar(numeros[i]);
	}

	return EXIT_SUCCESS;
}

int DeterminarImpar(int numero)
{
	int par=1;

	if(numero%2==1)
	{
		par=0;
		printf("%d\n",numero);
	}

	return par;
}
