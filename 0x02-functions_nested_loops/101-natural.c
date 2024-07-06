#include <stdio.h>
/**
 * main - function computes and prints sum of all multiples of 3 & 5 below 1024
 *
 * Return: returns 0 if successful
 */
int main(void)
{
int n, sum;

for (n = 0; n < 1024; ++n)
{
if ((n % 3 == 0) || (n % 5 == 0))
{
sum += n;
}
else
{
continue;
}
}
printf("%d\n", sum);
return (0);
}
