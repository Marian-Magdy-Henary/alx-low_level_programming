#include "main.h"
#include <string.h>
/**
 * leet - entry point
 *
 * @str : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
char *leet(char *str)
{
int i = 0;
int x = 0;
for (i = 0; str[i] != '\0' ; i++)
{
for (x = 65 ; x <= 122 ; x++)
{
if (str[i] == 97 || str[i] == 65)
{
str[i] = atoa(4);
}
else if (str[i] == 101 || str[i] == 69)
{
str[i] = atoa(3);
}
else if (str[i] == 111 || str[i] == 79)
{
str[i] = atoa(0);
}
else if (str[i] == 116 || str[i] == 84)
{
str[i] = atoa(7);
}
else if (str[i] == 108 || str[i] == 76)
{
str[i] = atoa(1);
}
}
}
return (str);
}
