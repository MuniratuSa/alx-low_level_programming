#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int m;


	while (*s != '\n')
{
	longi++;
	s++;
}
	s--;
	for (m = longi; m > 0; m--)
{
	_putchar(s);
	s--;
}
	_putchar('\n');
}
