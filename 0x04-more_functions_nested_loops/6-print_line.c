#include "main.h"
/**
 * print_line - prints a line to n
 * @n: the line is printed to numbe n
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			break;
		}
			_putchar('_');
	}
	_putchar('\n');
}
