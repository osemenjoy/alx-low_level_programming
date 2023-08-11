#include <stdio.h>
/**
 * main - Prints numbers between 0 to 9 and letters between a to f
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
		putchar(i + 0);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
