#include <stdio.h>

/**
*   \brief suma dos valores
*   \param result, sera el resultado de la suma de num1 y num2, estos son los parametros q se sumaran
*   \return devuelve la suma de ambos parametros
*/

float sum(float num1, float num2)
{
    return num1 + num2;
}

/**
*   \brief resta dos valores
*   \param result, sera el resultado de la resta de num1 y num2, estos son los parametros q se restaran
*   \return devuelve la resta de ambos parametros
*/

float subtraction(float num1, float num2)
{
    return num1 - num2;
}

/**
*   \brief multiplica dos valores
*   \param result, sera el resultado de la multiplicacion de num1 y num2, estos son los parametros q se multiplicaran
*   \return devuelve la multiplicacion de ambos parametros
*/

float multiply(float num1, float num2)
{
    return num1 * num2;
}

/**
*   \brief divide dos valores
*   \param result, sera el resultado de la division de num1 y num2, estos son los parametros q se dividiran
*   \return devuelve la division de ambos parametros
*/

float division(float num1, float num2)
{
    return num1 / num2;
}

/**
*   \brief factoriza un numero
*   \param result, será el resultado de num1 factorizado
*   \return devuelve el parametro factorizado
*/

int factoring(float num1)
{
    int result = num1;
    int i;

    for(i = 1; i < num1; i++)
    {
        result = result * i;
    }

    return result;
}

