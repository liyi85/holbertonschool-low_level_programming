#include <stdio.h>
/**
* main - You are not allowed to use any variable of type char
*
* Description: using the main function
* this program prints all single digit numbers of base 10 starting from
* Return: 0
*/
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
