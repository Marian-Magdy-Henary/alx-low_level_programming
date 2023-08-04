#include <stdio.h>
/**
 * main - entry point
 *
 * @s : checks input of function
 *
 * @x : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
int main(int x, char const *s[])
{
int i = 0;
for (i = 0; i < x; i++)
{
printf("%s\n", s[i]);
}
return (0);
}

