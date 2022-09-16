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
#include <string.h>

//Mastrapasqua Tomas
void FormarApellidoNombre(char* pNombre,char* pApellido,char* pCompleto);
int main(void) {

	setbuf(stdout,NULL);
	char pNombre[21];
	char pApellido[21];
	char pCompleto[21] = {""};

	printf("Ingrese el nombre: \n");
	fgets(pNombre, 21, stdin);
	//scanf("%[^\n]", pNombre);

	printf("Ingrese el apellido: \n");
	//fgets(pApellido, 21, stdin);
	scanf("%[^\n]", pApellido);


	 FormarApellidoNombre(pNombre,pApellido,pCompleto);


	 printf("%s", pCompleto);
	return EXIT_SUCCESS;
}

void FormarApellidoNombre(char* pNombre,char* pApellido,char* pCompleto)
{

	strcat(pCompleto, pApellido);
	strcat(pCompleto, ", ");
	strcat(pCompleto, pNombre);


}
