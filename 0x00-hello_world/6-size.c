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
printf("size of char: %s byte(s)\n", sizeof(a));
printf("size of int: %d byte(s)\n", sizeof(b));
printf("size of long int: %d bytes(s)\n", sizeof(c));
printf("size of long long int: %d bytes(s)\n", sizeof(d));
printf("size of float: %f byte(s)\n", sizeof(f));
return (0);
}
