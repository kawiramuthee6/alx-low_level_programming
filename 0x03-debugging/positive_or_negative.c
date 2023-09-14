#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative-Determine sign of integer, prints appropriate message
 *
 * @i: The integer to be checked.
 */

void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
}
