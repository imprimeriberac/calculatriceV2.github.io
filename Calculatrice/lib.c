#include "lib.h"
#include <stdio.h>

float addition(float nombre1, float nombre2)
{
    return nombre1 + nombre2;
}
float soustraction(float nombre1, float nombre2)
{
    return nombre1 - nombre2;
}
float multiplication(float nombre1, float nombre2)
{
    return nombre1 * nombre2;
}
float division(float nombre1, float nombre2)
{
    if (nombre1 != 0)
    {
        if (nombre2 != 0)
        {
            return nombre1 / nombre2;
        }
        else
        {
            printf("Vous ne pouvez pas diviser par 0\n");
        }
    }
    else
    {
        printf("Vous ne pouvez pas diviser par 0\n");
    }
}