#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * main - entry point
 *
 * @s : checks input of function
 *
 * @x : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
int main(int x, char *s[])
{
int i = 1;
int j = 0;
int B = 0;
for (i = 1; i < x; i++)
{
for (j = 0; s[i][j] != '\0'; j++)
{
if (!isdigit(s[i][j]))
{
printf("Error\n");
return (1);
}
}
B = B + atoi(s[i]);
}
printf("%d\n", B);
return (0);
}
