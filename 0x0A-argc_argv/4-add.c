#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
int i = 0;
unsigned int z = 0;
unsigned int res = 0;
char *e;
if (i > 0)
{
for (i = 0; i < x; i++)
{
e = s[i];
for (z = 0; z < strlen(e); z++)
{
if (e[z] < 48 || e[z] > 57)
{
printf("ERROR\n");
return (1);
}
}
res += atoi(e);
e++;
}
printf("%d\n", res);
}
else
{
printf("0\n");
}
return (0);
}
