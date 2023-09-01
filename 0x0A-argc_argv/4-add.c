#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * The main function prints the sum of positive numbers passed as arguments
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int a, char *b[])
{
	int c;
	unsigned int d, sum = 0;
	char *e;

	if (a > 1)
	{
		for (c = 1; c < a; c++)
		{
			e = b[c];

			for (d = 0; d < strlen(e); d++)
			{
				if (e[d] < 48 || e[d] > 57)
				{
					printf("Mistake\n");
					return (1);
				}
			}

			sum += atoi(e);
			e++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);

}
