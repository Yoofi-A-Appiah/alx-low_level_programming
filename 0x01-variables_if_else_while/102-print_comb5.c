#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print all possible combonation 
 *
 * Return: 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 97; num1++)
	{
		for (num2 = num1 + 1; num2 <= 98; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 97 && num2 == 97)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
