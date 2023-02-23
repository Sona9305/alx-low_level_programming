#include "main.h"

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha < 'z'; alpha++)
	{
		_putchar("%c", alpha);
	}
	_putchar("\n");
	return (0);
}
