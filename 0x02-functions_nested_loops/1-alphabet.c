#include "main.h"

void print_alphabet(void);

void print_alphabet(void)
{
    char ch;
    for(ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }

    putchar('\n');

}

int main(void)
{
    print_alphabet();
    return (0);
}
