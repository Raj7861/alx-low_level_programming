#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char cha;
	for (i = 0; i < 10; i++){
		for (cha = 'a'; cha <= 'z'; cha++)
			_putchar(cha);
		_putchar('\n');
	}
}
