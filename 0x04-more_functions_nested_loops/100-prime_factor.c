#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the largest prime number
  *
  * Return: Always
  */
int main(void)
{
	long prime = 612852475143;

	for (fp = 2; fp <= n; fp++)
	{
		if (n % fp == 0)
		{
			n /= fp;
			fp--;
		}
	}
	printf("%ld\n", fp);
	return (0);
}
