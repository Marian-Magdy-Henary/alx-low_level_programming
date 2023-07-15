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
int a = 97;
for (a = 97 ; a <= 122 ; a++)
{
if (a == 113 || a == 101)
{
putchar ('');
}
else
{
putchar (a);
}
}
return (0);
}

