#include "main.h"
/**
 * _print_alphabet - Entry point
 * Description: prints alphabet.
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar('\n');
}
