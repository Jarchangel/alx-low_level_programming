#include <stdio.h>

/**
 * main - Prints all hexadecimal strings
 *
 * Return: Always (Sucess)
 */
int main(void)

{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
