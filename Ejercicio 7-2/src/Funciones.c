/*
 * Funciones.c
 *
 *  Created on: 16 sep. 2022
 *      Author: Tomas Mastra
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Funciones.h"

 int getString(char* string, char* message, char* messageError, int max)
{
	int ret = -1;
	char buffer[256];
	int len;

	int i;

	if(string != NULL && message != NULL && messageError != NULL && max > 0)
	{



		printf("%s", message);
		fflush(stdin);
		scanf("%[^\n]", buffer);
		len = strlen(buffer);
		for(i=0;i<len;i++)
		{

			while(len>max)
			{
				printf("%s", messageError);
				fflush(stdin);
				//__fpurge(stdin);
				scanf("%[^\n]", buffer);

				len = strlen(buffer);

			}
		}

		strcpy(string, buffer);



		ret = 0;
	}



	return ret;
}


 int getInt(int* integer, char* message, char* messageError, int min, int max)
 {
 	int ret = -1;
 	char number[21];
 	int auxNumber;

 	if(integer != NULL && message != NULL && messageError != NULL && min < max )
 	{
 		printf("%s", message);
 		fflush(stdin);
 		scanf("%s", number);
		auxNumber = atoi(number);


 		while((auxNumber < min || auxNumber > max) && (validateInt(number)==0))
 		{
 			printf("%s", messageError);
 			fflush(stdin);
 			scanf("%s", number);
			auxNumber = atoi(number);



 		}

 		*integer=auxNumber;
 		ret = 0;
 	}

 	return ret;
 }


 int validateInt(char* integer)
 {
 	int ret;
 	int len;
 	char validateCaps[256];

 	ret = -1;

 	len = strlen(integer);



 			for(int i=0;i<len;i++)
 			{

 				validateCaps[i] = tolower(integer[i]);

 				if(validateCaps[i] < 48  ||  validateCaps[i]!=57)
 				{
 					ret = 0;

 				}

 			}


 		return ret;
 }


