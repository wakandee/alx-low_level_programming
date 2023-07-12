#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - is a function to print file name
 * @argc: var  count of the arguments supplied to the program and the
 * @argv: an array of pointers to the strings
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
