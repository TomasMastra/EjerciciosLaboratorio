/*
 * Funciones.h
 *
 *  Created on: 16 sep. 2022
 *      Author: Tomas Mastra
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/*
 *
 */
int getString(char* string, char* message, char* messageError, int max);
int getInt(int* integer, char* message, char* messageError, int min, int max);
int validateInt(char* integer);




#endif /* FUNCIONES_H_ */
