#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n < 0)
        {
                int ld = -1 * (n % 10);

                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
        }
        else
        {
                int ld = n % 10;

                if (ld > 5)
                {
                        printf("Last digit of %d is %d and is greater than 5\n", n, ld);
                }
                else if (ld < 6 && last_digit != 0)
                {
                        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
                }
                else if (ld == 0)
                {
                        printf("Last digit of %d is %d and is 0\n", n, ld);
                }
        }
        return (0);
}

