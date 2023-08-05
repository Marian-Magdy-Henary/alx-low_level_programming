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
int main(int x, char const *s[])
{
int i = 0;
int z = 0;
int res = 0;
char e;
if (i > 1)
{
for (i = 0; i < x; i++)
{
e = s[i];
for (z = 0; z < strlen(e); z++)
{
if (s[z] < 48 || s[z] > 57)
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
print("0\n");
}
return (0);
}
