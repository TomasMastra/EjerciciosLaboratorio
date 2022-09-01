

#include <stdio.h>
int Restar(int, int);
int Restar2(void);
void Restar3(int, int);
void Restar4(void);

int main()
{
    //Mastrapasqua Tomas
    setbuf(stdout,NULL);
    int numero1;
    int numero2;
    int resultado;
    ////////////////    1
    numero1=4;
    numero2=8;
    resultado = Restar(numero1, numero2);//resultado es lo que retorna, los numeros se los pasamos por parametro
    printf("1. El resultado es: %d\n", resultado);
    ////////////////////


    ////////////////////       2
    resultado=Restar2();//esta funcion solo retorna
    printf("2. El resultado es %d\n", resultado);
    /////////////////////



    /////////////////////////////       3
    numero1=9;
    numero2=1;

    Restar3(numero1, numero2);//esta funcion retorna void, osea nada o vacio
    ///////////////////////////////


    ////////////////////////      4
    Restar4();//no retorna nada, ni se le pasa nada por parametro
    ////////////////////////////
    return 0;
}


int Restar(int numero1, int numero2)//
{
    int resultado;

    resultado = numero1 - numero2;
    return resultado;//devuelve el resultado
}

int Restar2(void)
{
    int numero1=1;
    int numero2=2;
    int resta;

    numero1=3;
    numero2=6;
    resta= numero1-numero2;

    return resta;

}


void Restar3(int numero1, int numero2)
{
    int resta;
    resta =numero1-numero2;
    printf("3. El resultado es: %d \n", resta);
    //return suma;
}


void Restar4(void)
{
    int numero1;
    int numero2;
    int resultado;

    numero1=9;
    numero2=2;

    resultado = numero1 - numero2;
    printf("4. El resultado es: %d\n", resultado);
}












