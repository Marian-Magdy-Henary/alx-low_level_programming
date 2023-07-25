#include "main.h"
/**
 * _strlen - entry point
 *
 * @s : checks input of function
 *
 * Return: always  'counter' (success)
*/
int _strlen(char *s)
{
int counter;
for (counter = 0; *s != '\0'; s++)
{
++counter;
}
return (counter);
}
