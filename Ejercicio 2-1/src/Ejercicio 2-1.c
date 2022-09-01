/******************************************************************************

 Ingresar 5 nC:meros enteros calcular y mostrar el promedio de los nC:meros. Probar la aplicaciC3n con distintos valores.


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main (void)	{ //Mastrapasqua Tomas

  setbuf(stdout,NULL);
  int numero;
  int i;
  float promedio;
  float suma;

  i = 0;
  suma = 0;

  for (i = 0; i < 7; i++)
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

  promedio = suma / i;
  printf ("El promedio es: %.2f", promedio);	//cantidad decimales despues de la coma %.5f



  return EXIT_SUCCESS;
}



