#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @s : checks input of function
 *
 * @x : checks input of function
 *
 * @Y : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
int main(int x, char  *s[])
{
if (x >= 3)
{
printf("%s\n","Error");
return (1);
}
else
{
printf("%d", atoi(s[1]) * atoi(s[2]));
}
return (0);
}

