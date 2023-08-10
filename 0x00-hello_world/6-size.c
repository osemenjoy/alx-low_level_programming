#include <stdio.h>
/**
 * main - A program that returns the size of datatypes like char, int and so on
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("size of long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
