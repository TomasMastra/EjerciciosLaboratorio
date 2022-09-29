/*
 * Empleado.h
 *
 *  Created on: 23 sep. 2022
 *      Author: Tomas Mastra
 */

typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;

	int isEmpty;
}sEmpleado;

void inicializarEmpleado(sEmpleado empleado[], int tamEmpleado);
void cargarEmpleado(sEmpleado empleado[], int tamEmpleado);
int buscarLibre(sEmpleado empleado[], int tamEmpleado);

int modificarEmpleado(sEmpleado empleado[], int tamEmpleado);
int buscarEmpleadoPorId(sEmpleado empleado[], int tamEmpleado, int id);
