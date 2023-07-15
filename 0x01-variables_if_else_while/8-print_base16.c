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
int b = 97;
for (a = 48 ; a <= 57 ; a++)
{
putchar (a);
}
for (b = 97 ; b <= 102 ; b++)
{
putchar (b);
}
putchar ('\n');
return (0);
}

