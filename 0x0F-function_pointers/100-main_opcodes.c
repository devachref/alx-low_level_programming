#include <stdio.h>
#include <stdlib.h>
#include "funcion_pointers.h"

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int b;
	char *p = (char *)main;

	if (argc != 2)
		printf("Error\n"), exit(1);
	b = atoi(argv[1]);
	if (b < 0)
		printf("Error\n"), exit(2);
	while (b--)
		printf("%02hhx%s", *p++, b ? " " : "\n");
	return (0);
}
