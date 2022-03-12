#include <stdio.h>

/**
*main - print reverse alphabet z-a
*Return: Always 0 (Success)
*/

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
