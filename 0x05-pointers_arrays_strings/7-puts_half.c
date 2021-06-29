#include "holberton.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */

void puts_half(char *str)
{
	int c, i;
	char l;

	for (c = 0; str[c] != 0; c++)
	{
	}
	if (c % 2 == 0)
	{
		for ((i = c / 2); str[i] != 0; i++)
		{
			l = str[i];
			_putchar(l);
		}
	}
	else
	{
		for ((i = (c - 1) / 2); str[i] != 0; i++)
		{
			l = str[i];
			_putchar(l);
		}
	}
	_putchar('\n');
}
