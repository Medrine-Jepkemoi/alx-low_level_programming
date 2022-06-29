#include <stdio.h>

int print_sign(int n)
{
    if (n > 0)
    {
        return 1;
        putchar('+');
    }
    else if (n == 0)
    {
        return 0;
        putchar('0');
    }
    else
    {
        return -1;
        putchar('-');
    }
}

int main(void)
{
    int r;

    r = print_sign(98);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(0);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(0xff);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(-1);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    return (0);
}