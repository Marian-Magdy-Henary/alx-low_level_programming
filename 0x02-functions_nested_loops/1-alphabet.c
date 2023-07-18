#include "main.h"
/**
 * main - entry point
 *
 * Description: print phrase by putchar function
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
return (0);
}
