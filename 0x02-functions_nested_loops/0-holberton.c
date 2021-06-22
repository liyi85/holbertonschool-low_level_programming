#include "holberton.h"
/**
* main - Prints Holberton as a message.
*Description
*Program that prints Holberton
*Return: Always 0 (Success)
*/
int main(void)
{
sizeh int str[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
int count, sizeh;

sizeh = sizeof(str) / sizeof(int);
for (count = 0; count < sizeh; count++)
{
_putchar(str[count]);
}
_putchar('\n');
return (0);
}
