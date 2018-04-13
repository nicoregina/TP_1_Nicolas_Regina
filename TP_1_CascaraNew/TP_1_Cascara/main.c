#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main()
{//inicio de aplicacion
    char seguir='s';
    int opcion=0;
    float num1, num2, result;

    while(seguir=='s')//inicio del ciclo while
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n",num1);
        printf("2- Ingresar 2do operando (B=%.2f)\n",num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {//inicio switch
            case 1:
                printf("Ingrese el primer numero: ");
                fflush(stdin);
                scanf("%f", &num1);
                break;

            case 2:
                printf("Ingrese el segundo numero: ");
                fflush(stdin);
                scanf("%f", &num2);
                break;
            case 3:
                result = sum(num1, num2);
                printf("La suma es %f\n", result);
                printf("\n");
                break;

            case 4:
                result = subtraction(num1,num2);
                printf("la resta es %f\n", result);
                printf("\n");
                break;
            case 5:
                while(num2 <= 0)
                {
                    printf("ingrese un numero positivo\n");
                    fflush(stdin);
                    scanf("%f",&num2);
                }
                result = division(num1,num2);
                printf("la division da %f\n", result);
                printf("\n");
                break;
            case 6:
                result = multiply(num1,num2);
                printf("la multiplicacion da %f\n", result);
                printf("\n");
                break;
            case 7:
                while(num1 < 0)
                {
                    printf("ingrese un numero positivo\n");
                    fflush(stdin);
                    scanf("%f",&num1);
                }
                result = factoring(num1);
                while(result <= 0)
                {
                    printf("Por favor ingrese un numero menor \n");
                    fflush(stdin);
                    scanf("%f",&num1);
                    result = factoring(num1);
                }
                printf("resultado del factoreo %d\n", (int)result);
                printf("\n");
                break;
            case 8:
                result = sum(num1,num2);
                printf("resultado suma %f\n", result);
                printf("\n");
                result = subtraction(num1,num2);
                printf("resultado resta %f\n", result);
                printf("\n");
                result = multiply(num1,num2);
                printf("resultado multiplicacion %f\n", result);
                printf("\n");
                result = division(num1,num2);
                printf("resultado division %f\n", result);
                printf("\n");
                while(num1 < 0)
                {
                    printf("ingrese un numero positivo\n");
                    fflush(stdin);
                    scanf("%f",&num1);
                }
                result = factoring(num1);
                while(result <= 0)
                {
                    printf("Por favor ingrese un numero menor \n");
                    fflush(stdin);
                    scanf("%f",&num1);
                    result = factoring(num1);
                }
                printf("resultado del factoreo %f\n", result);
                printf("\n");
                break;
            case 9:
                seguir = 'n';
                break;
        }//fin del switch
        }//fin del while

    return 0;

}//fin de la aplicacion
