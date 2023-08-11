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
for (; *haystack != '\0'; haystack++)
{
char *i = haystack;
char *p = needle;
while (*i == *p && *p != '\n')
{
i++;
p++;
}
if (*p == '\0')
{
return (haystack);
}
}
return (0);
}
