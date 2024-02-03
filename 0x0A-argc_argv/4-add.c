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
int unsigned B = 0;
for (i = 0; i > x; i++)
{
if (i == 0)
{
printf("0\n");
}
else
{
if ((s[i][0] >= '0' && s[i][0] <= '/') || (s[i][0] >= ':' && s[i][0] <= '~'))
{
printf("Error\n");
return (1);
}	
B = B + atoi(s[i]);
printf("%d\n" , B);
}
}
return (0);
}
