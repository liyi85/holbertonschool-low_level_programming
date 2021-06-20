#include <stdio.h>
/**
* main - Prints numbers between 01 to 10.
*
*Description Numbers must be separated by coma followed by a space
*Program that prints all possible different combinations of two digits
*Return: Always 0 (Success)
*/

int main(void)
{
int i, j;

i = 48;
j = 48;

while (j < 58)
{
i = 48;
while (i < 58)
{
if (j != i && j < i)
{
putchar(j);
putchar(i);
if (i == 57 && j == 56)
{
break;
}
putchar(',');
putchar(' ');
}
i++;
}
j++;
}
putchar('\n');
return (0);
}
