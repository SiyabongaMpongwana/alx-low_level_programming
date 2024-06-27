#include "main.h"
/**
 * void positive_or_negative - checks if input is negative, positive, or zero
 * Returns: 0 if successful
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}
return; 
}

