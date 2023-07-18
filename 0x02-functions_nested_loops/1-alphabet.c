#include "main.h"
/**
 * main - entry point
 *
 * print alphabet in lowercase by void print_alphabet function
 *
 * Return: always 0 (success)
*/
void print_alphabet(void)
{
int a = 97;
for (a = 97 ; a <= 122 ; a++)
{
putchar (a);
}
putchar ('\n');
}
