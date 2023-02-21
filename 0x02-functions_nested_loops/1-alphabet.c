#include <stdio.h>

/**
 * print_alphabet - in lower case
 * Return 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
