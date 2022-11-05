#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all arguments
 * @argc: the # of args
 * @argv: the names of args
 * Return: 0
 *
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[1]);
		i++;
	}
	return (0);
}
