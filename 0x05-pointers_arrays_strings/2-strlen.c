#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int long = 0;

	while (*s != '\0')
{
	long++;
	s++;
}
	return (long);
}
