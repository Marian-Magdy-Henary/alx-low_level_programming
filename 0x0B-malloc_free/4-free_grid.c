#include "main.h"
#include <stdlib.h>
/**
 * free_grid - entry point
 *
 * @height : int
 *
 * @grid : grid of memory
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
