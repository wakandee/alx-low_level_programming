#include <stdio.h>
#include <stdlib.h>

/**
 * The main function calculates and prints the change that needs to be given
 * @argc: number of arguments to be passed
 * @argv: number of variables to calculate
 * Return: always 0 for success
 */
int main(int c, char **v)
{
	int d, t;

	if (c < 2)
	{
		printf("Mistake\n");
		return (1);
	}

	t = atoi(v[1]);

	for (d = 0; t > 0; d++)
	{
		if (t - 25 >= 0)
			t = t - 25;
		else if (t - 10 >= 0)
			t = t - 10;
		else if (t - 5 >= 0)
			t = t - 5;
		else if (t - 2 >= 0)
			t = t - 2;
		else if (t - 1 >= 0)
			t = t - 1;
	}
	printf("%d\n", d);
	return (0);
}

