/******************************************************************************

 Ingresar 5 nC:meros enteros calcular y mostrar el promedio de los nC:meros. Probar la aplicaciC3n con distintos valores.


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main (void)	{ //Mastrapasqua Tomas
	setbuf(stdout,NULL);
  int numero;
  int contadorNumeros;
  float promedio;
  float suma;

  contadorNumeros = 0;
  suma = 0;

  for (contadorNumeros = 0; contadorNumeros < 5; contadorNumeros++)
    {
      printf ("Ingrese un numero negativo: ");
      scanf("%d", &numero);
      while(numero>-1)
      {
    	  printf ("Ingrese el numero otra vez (Solo negativos): ");
    	  scanf("%d", &numero);
      }


      suma = suma + numero;

    }

  promedio = suma / contadorNumeros;
  //promedio= (float)suma/contadorNumeros;  Otra forma de buscar promedio
  printf ("El promedio es: %.2f", promedio);	//cantidad decimales despues de la coma %.5f






  /*
     int=int/int
     parseo=convertir una cadena a un valor numerico

     casting o casteo= convertir un tipo numerico a otro tipo numerico


   */


  return 0;
}



