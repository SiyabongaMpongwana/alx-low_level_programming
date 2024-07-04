#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - generate random numbers
 * function generates random numbers
 * Returns: returns zero when successful 
 * prints them on screen with their negative or positve values
 */
int main(void)
{
/**
 * variable to store the random generated number
 */
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
/**random number tested against zero
 * if greater than, prints value of n and 'is positive'
 * if less than, prints value of n and 'is negative'
 * if equal to zero, prints value of n and 'is zero'
 */
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
/**
 * returns a zero if successful
 */
return (0);
}

