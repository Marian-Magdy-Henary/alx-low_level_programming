#include "main.h"
#include <stdlib.h>
/**
 * free_grid - entry point
 *
 * height : checks input of function
 *
 * grid : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
void free_grid(int **grid, int height)
{
int i = 0;
for (i = 0; i < height ; i++)
{
free(grid[i]);
}
free(grid);
}
