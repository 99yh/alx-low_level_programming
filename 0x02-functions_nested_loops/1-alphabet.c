/* this program prints _putchar to the screen */

#include "main.h"

/**
 * print_alphabet_x10 - the starting point of the program
 */
void print_alphabet_x10(void)
{
	char i = 'a';
	int n;

	for(i = 1; i <= 10; i++)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
