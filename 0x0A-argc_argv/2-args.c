#include "main.h"
/**
 * main - Program that prints all arguments it receives
 * @argc: count arguments
 * @argv:arguments
 * Return:return (0) (succesfully)
 *
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);

	for (i = 0; i < argc - 1; i++)
	{
		printf("%s", argv[1]);
	}
	return (0);
}
