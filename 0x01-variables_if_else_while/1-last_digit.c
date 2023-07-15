#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print phrase by printf function
 *
 * Return: always 0 (success)
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("Last digit of %d is", n, " and is greater than 5");
}
if else(n == 0)
{
printf("Last digit of %d is", n, " and is and is 0");
}
if else(n > 6 && n != 0)
{
printf("Last digit of %d is", n, " and is less than 6 and not 0");
}
return (0);
}
