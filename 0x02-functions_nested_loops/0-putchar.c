#include <stdio.h>
/**
 * main - prints '_putchar' followd by new line
 *
 * return - returns 0 if successful
 */
int main(void)
{
int toPrint[8] = {95, 112, 117, 116, 99, 104, 97, 114};
/*
 * set of numbers that print '_putchar' when passed into the putchar function
 * array ordered, the order is set so it would print the string '_putchar'
 **/
int i = 0;
/**
 * variable that will used pull out elements from the 'toPrint' array and
 * pass them in the putchar function in the while loop below
 */
while (i <= 7)
/**
 * the is tested against the 7 which is the last number
 * before the '\0' in the 'toPrint' array
 */
{
putchar(toPrint[i]);
/**
 * prints ASCII character corresponding to the number
 * pulled out by 'i' from the 'toPrint' array
 */
++i;
/**
 * increments i
 */}
putchar(10);
/* prints new line after the loop terminates */
return (0);
}

