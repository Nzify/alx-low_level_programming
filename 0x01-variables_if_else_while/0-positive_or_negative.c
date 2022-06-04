#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates a random index and determines
 * whether a given number is positive, negative
 * or zero.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive\n", n);

alse if (n < 0)
printf("%d is negative\n", n);
else if (n == 0)
printf("%d is zero\n", n);

return (0);
}
