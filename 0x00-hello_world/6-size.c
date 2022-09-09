#include <stdio.h>



/**
 * main - Entry point
 *
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 *
 */



int main(void)

{

	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
