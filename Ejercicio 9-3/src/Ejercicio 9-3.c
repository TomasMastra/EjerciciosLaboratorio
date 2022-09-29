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
#include "Empleado.h"
#include "Funciones.h"


int main(void) {

	setbuf(stdout,NULL);
	int opcion;
	int tamEmpleado=300;
	sEmpleado empleado[300];


	 inicializarEmpleado(empleado,  tamEmpleado);


	do
	{
		printf("---------------\n"
				"1. Alta\n"
				"2. Modificar\n"
				"3. Baja\n"
				"4. Informar\n"
				"5. Salir\n"
				"Elegir opcion:\n");
		scanf("%d", &opcion);


		switch(opcion)
		{

		case 1:
			cargarEmpleado(empleado, tamEmpleado);


		break;
		case 2:

			modificarEmpleado(empleado, tamEmpleado);

			break;
		}

	}while(opcion!=5);

	return EXIT_SUCCESS;
}
