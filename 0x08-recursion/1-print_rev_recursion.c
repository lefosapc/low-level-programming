#include"main.h"
#include<stdio.h>
/**
*_print_rev_recursion - prints a string in reverse
*@s: string to be printed
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_print_rev_recursion(s - 1);
}
