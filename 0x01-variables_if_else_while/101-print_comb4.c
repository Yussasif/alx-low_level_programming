#include <stdio.h>

/**
*main - print all combination of 3 different digits
*Return: Always 0 (Success)
*/

int main(void)
{
	int one;
	int ten;
	int hundred;


	for (hundred = '0'; hundred <= '9'; hundred++) /*hundred's place*/
	{
		for (ten = (hundred + 1); ten <= '9'; ten++) /*tens=100s+1*/
		{
			for (one = (ten + 1); one <= '9'; one++) /*one's ten+1*/
			{
				putchar(hundred);
				putchar(ten);
				putchar(one);

				if (hundred != '7' || ten != '8' || one != '9') /*print commas*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
