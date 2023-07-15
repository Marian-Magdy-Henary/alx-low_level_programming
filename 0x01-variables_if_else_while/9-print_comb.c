#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print phrase by putchar function
 *
 * Return: always 0 (success)
*/
int main(void)
{
int a = 48;
for (a = 48 ; a <= 57 ; a++)
{
putchar (a);
}
putchar (',');
putchar (32);
putchar ('\n');
return (0);
}
