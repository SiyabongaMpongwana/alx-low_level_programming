#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - function
 * function generates random numbers
 * Returns: returns nothing
 * prints them on screen with their negative or positve values
 */
int main(void)
{
/**
 *function to generate random numbers
 * and print them on screen
 */
int n;
/**
 * n the variable used to store the random numbers generated
 */
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
/**
 * random number tested against zero
 * if greater than, prints value of n and 'is positive'
 * if less than, prints value of n and 'is negative'
 * if equal to zero, prints value of n and 'is zero'
 */
if (n > 0)
/**
 * n is compared to 0 if it is greater than
 * the following statement will be executed
 */
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
}

