#include "main.h"
#include <stdlib.h>

int print_last_digit(int);

int print_last_digit(int n)
{
    int lastdigit;
    n = abs(n);
    lastdigit = n % 10;

	_putchar(lastdigit + '0');
    return lastdigit;
     
}