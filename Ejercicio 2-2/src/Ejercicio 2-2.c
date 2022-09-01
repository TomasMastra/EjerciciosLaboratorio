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

int main(void) { //Mastrapasqua Tomas

	setbuf(stdout,NULL);
	int numero;
	char respuesta = 's';
	int sumaPositivos=0;
	int sumaNegativos=0;
	int promedioNegativos;
	int promedioPositivos;
	int cantidadPositivos=0;
	int cantidadNegativos=0;
	int banderaP=0;
	int banderaN=0;
	int menorP;
	int mayorN;

	while(respuesta=='s')
	{

		printf("Ingrese un numero: ");
		scanf("%d", &numero);

		if(numero>-1)
		{
			sumaPositivos=sumaPositivos+numero;
			cantidadPositivos++;

			if(banderaP==0)
			{
				menorP = numero;
				banderaP=1;
			}else
				if(numero<menorP)
			{
					menorP = numero;

			}
		}else
		{
			sumaNegativos=sumaNegativos+numero;
			cantidadNegativos++;

			if(banderaN==0)
			{
				mayorN = numero;
				banderaN=1;
			}else
				if(numero>mayorN)
			{
					mayorN = numero;

			}
		}

		printf("Queres continuar? (si = s)");
		fflush(stdin);
		scanf("%c", &respuesta);
	}

	promedioPositivos = sumaPositivos/cantidadPositivos;
	promedioNegativos = sumaNegativos/cantidadNegativos;

	printf("promedio positivos: %d - menor positivos: %d\n", promedioPositivos, menorP);
	printf("promedio negativos: %d - mayor negativos: %d\n", promedioNegativos, mayorN);




	return EXIT_SUCCESS;
}
