#include <stdio.h>
#include <main.h>

/**
 * print_alphabet - in lower case
 * Return 0
 */
char print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
