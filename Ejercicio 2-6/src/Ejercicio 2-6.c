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
//Tomas Mastrapasqua
int main(void) {

	setbuf(stdout,NULL);

	char letra;
	int i;
	int mayusculas=0;
	int numeros;


	for(i=0;i<5;i++)
	{
		printf("Ingresar un caracter: ");
		fflush(stdin);
		scanf("%c", &letra);


		if(letra == 'm')
		{
			mayusculas++;
		}
	}

	printf("Se ingresaron %d letras 'm' minusculas ", mayusculas);



	return EXIT_SUCCESS;
}
