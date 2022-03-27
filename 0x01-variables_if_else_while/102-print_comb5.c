#include <stdio.h>

/**
*main - print a nu pair form 00-99 but no repeats (00 01, 00 02, 00 03,...)
*Return: Always 0 (Success)
*/

int main(void)
{
	int ones;
	int tens;
	int t;
	int o;

	for (tens = '0'; tens <= '9'; tens++) /*print first two digit combo*/
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (t = tens; t <= '9'; t++) /*print the second pair*/
			{
				for (o = ones + 1; o <= '9'; o++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(t);
					putchar(o);

					if (((tens != '9' && ones != '8') && (t != '9' && o != '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				o = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
