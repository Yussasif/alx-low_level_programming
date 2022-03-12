#include <stdio.h>

/**
*main - Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /* print lower case a-z*/
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /* print upper case A-Z*/
	{
		putchar(upper);
		upper++;
	}

	putchar ('\n');

	return (0);
}
