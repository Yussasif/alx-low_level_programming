#include <stdio.h>

/**
* main - Entry poinit
* Return: Always 0 (Success)
*/

int main(void)
{
	printf("size of a char: %zu byte(s)\n", sizeof(char), stderr);
	printf("size of an int: %zu byte(s)\n", sizeof(int), stderr);
	printf("size of a long int: %zu byte(s)\n", sizeof(long int), stderr);
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int), stderr);
	printf("size of a float: %zu byte(s)\n", sizeof(float), stderr);
	return (0);
}
