#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - finds the first occurence of the substring needle
 * in the string haystack
 * @haystack: paramter for haystack
 * @needle: paramter for needle
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
