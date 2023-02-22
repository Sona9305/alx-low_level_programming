#include "main.h"

/**
 * print_alphabet - in lower case
 * Return 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main()
{
    int i = 0;
    while (i < 10)
    {
        printf("c");
        i++;
    }
    //putchar("\n");
    return (0);
}
