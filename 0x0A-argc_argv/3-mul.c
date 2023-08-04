#include <stdio.h>
#include <stdlib.h>
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
int res, num1, num2;
num1 = _atoi(s[1]);
num2 = _atoi(s[2]);
res = num1 + num2;
printf("%d\n", res);
return (0);
if (x > 3 || x < 3)
{
printf("%s\n", "Error");
return (1);
}
}

