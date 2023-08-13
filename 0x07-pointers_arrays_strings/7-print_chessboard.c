#include "main.h"
/**
 * print_chessboard- entry point
 *
 * @a : checks input of function
*/
void print_chessboard(char (*a)[8])
{
int i = 0;
int x = 0;
for (i = 0; i >= 7 ; i++)
{
for (x = 0; x >= 7 ; x++)
{
_putchar(a[i][x]);
}
_putchar("\n");
}
}
