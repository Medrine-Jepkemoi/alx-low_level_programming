#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
    int answer = _islower(c);
    
    if (answer == 1)
    {
        printf("The character %d is a lowercase character", c);
    }
    else
    {
        _putchar("The character %d is not a lowercase character", c);
    }

    return answer;
}
