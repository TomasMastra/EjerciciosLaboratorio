/*
 ============================================================================
 Name        : Desafío.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int validarSalir(int opcion);
int main(void) {

	setbuf(stdout,NULL);

	int opcion;
	int flag=0;
	int flagProcesar=0;


	do{

		printf("Iniciar\n");
		printf("Procesar\n");
		printf("Finalizar\n");
		printf("Salir\n");
		printf("Ingrese la opcion: ");
		scanf("%d", &opcion);


		switch(opcion)
		{

		case 1:

			flag = 1;
			break;



		case 2:

			if(flag == 1)
			{

			}else
			{
				printf("Debe iniciar antes de procesar\n");
			}



			break;




		case 3:

			if(flag == 1)
			{

			}else
			{
				printf("Debe iniciar o procesar antes de finalizar\n");
			}


			break;

		case 4:

			opcion = validarSalir(opcion);

			break;

		}




	}while(opcion!=5);
	return EXIT_SUCCESS;
}


int validarSalir(int opcion)
{
	int ret;
	int validacion;

	printf("Desea salir? (1 = si): ");
	scanf("%d", &validacion);

	if(validacion == 1)
	{
		ret = 5;
	}


	return ret;
}
