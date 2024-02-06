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
int change25, change10, change5, change2, change1 = 0;
if (x > 2 || x == 1)
{
printf("Error\n");
return (1);
}
if (atoi(s[1]) < 0)
{
printf("0\n");
}
change25 = atoi(s[1]) % 25;
change10 = change25 % 10;
change5 = change10 % 5;
change2 = change5 % 2;
change1 = change2 % 1;
printf("%d\n", ((atoi(s[1]) - change25) / 25) +
((change25 - change10) / 10) + ((change10 - change5) / 5) +
((change5 - change2) / 2) + ((change2 - change1) / 1));
return (0);
}
