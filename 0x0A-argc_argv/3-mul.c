#include "main.h"
#include <stdlib.h>
/**
 * main - Prints the multiplication of two numbers
 * @argc: count arguments
 * @argv: arguments
 * Return: return 0 (succesfully)
 *
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)

	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
		return (1);
}
