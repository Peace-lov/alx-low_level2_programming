#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char b;
	float c;
	double d;

	printf("Size of int: %lu bytes\n", (unsigned long)sizeof(a));
	printf("Size of char: %lu bytes\n", (unsigned long)sizeof(b));
	printf("Size of float: %lu bytes\n", (unsigned long)sizeof(c));
	printf("Size of double: %lu bytes\n", (unsigned long)sizeof(d));
	return (0);
}
