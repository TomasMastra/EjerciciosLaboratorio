/*
 * Empleado.c
 *
 *  Created on: 23 sep. 2022
 *      Author: Tomas Mastra
 */

#ifndef EMPLEADO_C_
#define EMPLEADO_C_
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>
#include "Empleado.h"
#include "Funciones.h"

void inicializarEmpleado(sEmpleado empleado[], int tamEmpleado)
{

	int i;

	for(i=0;i<tamEmpleado;i++)
	{
		empleado[i].isEmpty=-1;
	}
}

void cargarEmpleado(sEmpleado empleado[], int tamEmpleado)
{

	int i;
	int guardar;

	i = buscarLibre(empleado, tamEmpleado);
	{
		if(i != -1)
		{

			empleado[i].id=i+1000;


			getName(empleado[i].name, "Ingrese el nombre: ", "ERROR, Ingrese el nombre: ", 51);
			getName(empleado[i].lastName, "Ingrese el apellido: ", "ERROR, Ingrese el apellido: ", 51);
			getInt(&empleado[i].sector, "Ingrese el sector: ", "ERROR, Ingrese el sector: ", 1, 100);
			getFloat(&empleado[i].salary, "Ingrese el salario: ", "ERROR, Ingrese el salario: ", 100, 100000);







			getInt(&guardar, "Ingrese 1 para guardar o 2 para no guardarlo: ", "ERROR, Ingrese 1 para guardar: ", 1, 2);


			if(guardar==1)
			{
				empleado[i].isEmpty=1;
			}


		}
	}
}


int buscarLibre(sEmpleado empleado[], int tamEmpleado)
{
	int i;
	int ret=-1;

	for(i=0;i<tamEmpleado;i++)
	{
		if(empleado[i].isEmpty==-1)
		{
			ret=i;
			break;
		}else
		{
			printf("No hay espacio\n");
			break;
		}
	}



	return ret;

}

#endif /* EMPLEADO_C_ */
