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

//Mastrapasqua Tomas D
typedef struct
{
	int legajo;
	char nombre[21];
	int edad;
}eAlumno;
eAlumno pedirDatos(int* numero);
int main(void) {

	setbuf(stdout,NULL);
	eAlumno alumno[3];
	int numero;

	for(int i=0;i<3;i++)
	{
		*(alumno+i) = pedirDatos(&numero);
	}

	for(int i=0;i<3;i++)
	{
		printf("%d - %s - %d\n", (*(alumno+i)).legajo, (*(alumno+i)).nombre , (*(alumno+i)).edad);
	}




	return EXIT_SUCCESS;
}

eAlumno pedirDatos(int* numero)
{
	eAlumno alumno;

	if(numero!=NULL)
	{
	printf("Ingrese el legajo: \n");
	scanf("%d", &alumno.legajo);

	printf("Ingrese el nombre: \n");
	fflush(stdin);
	scanf("%[^\n]", alumno.nombre);

	printf("Ingrese la edad: \n");
	scanf("%d", &alumno.edad);
	}


	return alumno;
}
