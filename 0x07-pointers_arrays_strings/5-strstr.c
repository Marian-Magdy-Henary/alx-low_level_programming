#include "main.h"
/**
 * _strstr - entry point
 *
 * @haystack : checks input of function
 *
 * @needle : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int x = 0;
for (i = 0; haystack[i] > '\0'; i++)
{
for (x = 0; needle[x] > '\0' ; x++)
{
if (haystack[i] == needle[x] && needle != '\n')
{
return (haystack);
}
else
{
return ('\n');
}
}
}
return ('\n');
}
