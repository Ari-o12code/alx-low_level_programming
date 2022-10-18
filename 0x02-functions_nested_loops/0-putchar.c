#include <stdio.h>
#include "main.h"



/**
 * main - prints_putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */


int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		putchar(*sh);
		sh++;
	}
	putchar('\n');

	return (0);
}
