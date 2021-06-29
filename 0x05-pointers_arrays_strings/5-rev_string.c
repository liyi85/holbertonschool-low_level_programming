#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int i, rs;
	char character;

	for (i = '\0'; s[i] != 0; i++)
	{
	}
	rs = 0;
	for (i = i - 1; rs < i; rs++)
	{
		character = s[i];
		s[i] = s[rs];
		s[rs] = character;
		i--;
	}
}
