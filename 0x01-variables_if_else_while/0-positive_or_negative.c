#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - more headers goes there
* main - tells the number is negative or positive or zero
*
*/

/* main - betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else
{
printf("%i is negative\n", n);
}
return (0);
}
