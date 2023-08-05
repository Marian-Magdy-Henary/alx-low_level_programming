#include <stdlib.h>
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
int res = 0;
for (i = 0; i < x; i++)
{
if (s[0])
{
printf("0\n");
}
else
{
printf("Error\n");
return (1);
}
else if (s[i] >= 48 || s[i] <= 57)
{
res += atoi(s[i]);
printf("%d\n", res);
}
}
return (0);
}
