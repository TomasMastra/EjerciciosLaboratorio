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
#include <ctype.h>
#include <strings.h>

typedef struct
{
	char nombre[21];
	int materiasAprobadas;
	int sumaDeNotas;
	float promedio;
}eAlumno;

void cargarAlumno(eAlumno alumno[], int tamAlumno);
void mostrarAlumnos(eAlumno alumno[], int tamAlumno);
int main(void) {

	setbuf(stdout,NULL);
	eAlumno alumno[5];
	int tamAlumno = 5;

	 cargarAlumno(alumno, tamAlumno);
	 mostrarAlumnos(alumno, tamAlumno);
	 {




	return EXIT_SUCCESS;
}






	}


void cargarAlumno(eAlumno alumno[], int tamAlumno)
{
	int i;

		for(i=0;i<tamAlumno;i++)
		{
			printf("Ingrese el nombre del alumno: \n");
			fflush(stdin);
			scanf("%[^\n]", alumno[i].nombre);

			printf("Ingrese la suma de notas del alumno: \n");
			scanf("%d", &alumno[i].sumaDeNotas);

			printf("Ingrese la cantidad de materias aprobadas del alumno: \n");
			scanf("%d", &alumno[i].materiasAprobadas);

			/*
			 *
			 * Usar funciones pedirNumeros y strings
			 * buscarLibre
			 */



		}





}


void mostrarAlumnos(eAlumno alumno[], int tamAlumno)
{
	printf("Lista de lumnos:\n");
	for(int i=0;i<tamAlumno;i++)
	{
		printf("Nombre: %s / Suma de notas: %d / Materias aprobadas: %d\n", alumno[i].nombre, alumno[i].sumaDeNotas, alumno[i].materiasAprobadas);
	}
}

