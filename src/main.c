// Input/output functions, for printing to console.
#include <stdio.h>

/* Boolean: print only odds?
 * 0 = false, print all numbers.
 * =>1 = true, print only odds.
 */
void timesTables(int odds_only)
{
    /* Iterate through 12x12 timestables.
     * If only odds are to be printed, incrememnt by 2 to skip evens.
     */
    for (int i = 1; i < 13; odds_only ? i += 2 : i++)
    {
        /* Iterate through number to be multiplied. */
        for (int j = 1; j < 13; odds_only ? j += 2 : j++)
        {
                /* Print i multiplied by j followed by a space. */
                printf("%d ", i * j);
        }
        /* Add a new line at the end of each row. */
        printf("\n");
    }
}

/* Entry point for C. */
int main(int argc, char argv[])
{
    printf("Timestables:\n");
    /* Print timestables with evens. (0 as a parameter). */
    timesTables(0);

    printf("\nOdd timestables:\n");
    /* Print timestables with odds only. (=>1 as a parameter). */
    timesTables(1);

    return 0;
}

