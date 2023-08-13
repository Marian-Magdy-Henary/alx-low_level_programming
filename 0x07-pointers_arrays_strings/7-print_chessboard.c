#include "main.h"
#include "stdio.h"
/**
 * print_chessboard- entry point
 *
 * @a : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
void print_chessboard(char (*a)[8])
{
int i = 0;
int x = 0;
for (i = 0; i >= 8 ; i++)
{
for (x = 0; x >= 8 ; x++)
{
printf("%c\n", a[i][x]);
}
}
}
