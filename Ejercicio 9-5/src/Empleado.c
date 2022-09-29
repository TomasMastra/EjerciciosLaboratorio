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


		}else
		{
			printf("No hay espacio\n");
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
		}
	}

	printf("Elmpleado %d\n", ret);


	return ret;

}


int modificarEmpleado(sEmpleado empleado[], int tamEmpleado)
{
	int ret;
	int id;
	int opcion;
	getInt(&id,"Ingrese ID para modificar: ","ERROR, Ingrese ID para modificar: ",1000,5000);
	ret = buscarEmpleadoPorId(empleado,  tamEmpleado,  id);


	if(ret!= -1)
	{

		getInt(&opcion,"Que quiere modificar? (1.Nombre, 2.Apellido, 3.Salario, 4.Sector): ","ERROR, Que quiere modificar? (1.Nombre, 2.Apellido, 3.Salario, 4.Sector): ",1000,5000);
		switch(opcion)
		{

		case 1:
		getName(empleado[ret].name,"Ingrese nombre nuevo: ","ERROR, Ingrese nombre nuevo: ",51);
		break;

		case 2:
			getName(empleado[ret].lastName,"Ingrese nuevo apellido: ","ERROR, Ingrese nuevo apellido: ",51);

			break;



		case 3:
			getFloat(&empleado[ret].salary,"Ingrese nuevo salario: ","ERROR, Ingrese nuevo salario: ",100,10000000);


			break;


		case 4:

			getInt(&empleado[ret].sector,"Ingrese nuevo sector: ","ERROR, Ingrese nuevo nuevo: ",1,10);


			break;

		}

	}else
	{
		printf("No existe ese empleado\n");
	}




	return ret;
}
int buscarEmpleadoPorId(sEmpleado empleado[], int tamEmpleado, int id)
{
	int index=-1;
	for(int i=0;i<tamEmpleado; i++)
	{
		if(empleado[i].id == id)
		{
			index = i;
			break;
		}
	}



	return index;
}


int eliminarEmpleado(sEmpleado empleado[], int tamEmpleado)
{
	int ret;
	int id;
	int confirmar;

	getInt(&id,"Ingrese ID para eliminar: ","ERROR, Ingrese ID para eliminar: ",1000,5000);
	ret = buscarEmpleadoPorId(empleado,  tamEmpleado,  id);

	if(ret!= -1)
	{
		getInt(&confirmar, "Ingrese 1 para eliminar o 2 para cancelar: ", "ERROR, Ingrese 1 para eliminar: ", 1, 2);
		if(confirmar == 1)
		{
			empleado[ret].isEmpty=-1;
			printf("Empleado eliminado con exito\n");
		}

	}else
	{
		printf("ERROR, No se encontro ese empleado\n");
	}



	return ret;
}

int ordenarEmpleados(sEmpleado empleado[], int tamEmpleado)
{
	int ret=-1;
	int i;
	int j;
	sEmpleado aux;


			for(i=0; i<tamEmpleado-1; i++)
			{
				for(j=i+1; j<tamEmpleado; j++)
				{
					if(strcmp(empleado[i].lastName, empleado[j].lastName) && empleado[i].isEmpty!=-1 && empleado[j].isEmpty!=-1)
					{
						aux = empleado[i];
						empleado[i] = empleado[j];
						empleado[j] = aux;
					}else
					{
						if(empleado[i].sector>empleado[j].sector)
						{
							aux = empleado[i];
							empleado[i] = empleado[j];
							empleado[j] = aux;
						}
					}
				}
			}


	return ret;
}

int mostrarEmpleados(sEmpleado empleado[], int tamEmpleado)
{
	int ret=-1;
	int i;


	for(i=0;i<tamEmpleado;i++)
	{
		if(empleado[i].isEmpty!=-1)
		{
		printf("ID: %d, Nombre; %s, Apellido: %s, Salario: %f, Sector: %d\n",empleado[i].id,empleado[i].name,empleado[i].lastName,empleado[i].salary,empleado[i].sector);
		}
	}



	return ret;

}


int calcularPromedioSalarios(sEmpleado empleado[], int tamEmpleado)
{
	int ret=-1;
	int i;
	float promedio;
	float total=0;
	int cantidadEmpleados=0;

	for(i=0;i<tamEmpleado;i++)
	{
		if(empleado[i].isEmpty!=-1)
		{
		total=total+empleado[i].salary;
		cantidadEmpleados++;
		}
	}

	promedio=total/cantidadEmpleados;
	printf("Total salarios: %f, promedio: %f\n",total,promedio);
	 mostrarPromedios(empleado,  tamEmpleado,  promedio);


	return ret;
}

int mostrarPromedios(sEmpleado empleado[], int tamEmpleado, float promedio)
{
	int ret=-1;
	int i;

	printf("Empleados que superan el salario promedio\n");
	for(i=0;i<tamEmpleado;i++)
		{
			if(empleado[i].salary>=promedio && empleado[i].isEmpty!=-1)
			{
				printf("ID: %d, Nombre; %s, Apellido: %s, Salario: %f, Sector: %d\n",empleado[i].id,empleado[i].name,empleado[i].lastName,empleado[i].salary,empleado[i].sector);

			}
		}



	return ret;
}
#endif /* EMPLEADO_C_ */
