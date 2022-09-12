#include <stdio.h>
 /**
  * main - Prints all single numbers of base 10 satrting from 0
  *
  * Retun: Always (Sucess)
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
