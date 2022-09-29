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
	int banderaCase1=0;


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
			banderaCase1=1;

		break;
		case 2:

			if(banderaCase1==1)
			{
			modificarEmpleado(empleado, tamEmpleado);
			}else
			{
				printf("Ingrese un empleado!!!\n");
			}

			break;

		case 3:
			if(banderaCase1==1)
			{
			eliminarEmpleado(empleado, tamEmpleado);
			}else
			{
				printf("Ingrese un empleado!!!\n");
			}

			break;
		}

	}while(opcion!=5);

	return EXIT_SUCCESS;
}
