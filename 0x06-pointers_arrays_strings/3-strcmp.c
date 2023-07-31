#include "main.h"
/**
 * _strcmp - entry point
 *
 * @s1 : checks input of function
 *
 * @s2 : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
int _strcmp(char *s1, char *s2)
{
int n = 0;
int str1;
int str2;
int compare;
for (n = 0; s1[n]; n++)
{
str1 = (int)s1[n];
}
for (n = 0; s2[n]; n++)
{
str2 = (int)s2[n];
}
compare = str1 - str2;
return (compare);
}
