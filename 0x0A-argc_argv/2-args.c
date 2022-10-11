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
	int count = 0;

	if (argc > 0)

	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
