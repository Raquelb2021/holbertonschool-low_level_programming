#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: count the arguments
 * @argv: arguments
 * Return: return 0 (succesfully)
 *
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%i\n", argc - 1);

	return (0);
}
