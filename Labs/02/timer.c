#include <time.h>
#include <stdio.h>

void code ()
{
    for ( int i =0; i <10000; i ++)
    {
        printf (".");
    }
    printf ("\n") ;
}

int main ()
{
    double timeAvrg;

    int runs = 10;
    for (int i = 0; i < runs; i++)
    {
        clock_t t = clock();

        code();

        printf ("clocks : %d \n", (int)(t = clock() -t));
        timeAvrg += t;
    }

    timeAvrg /= runs;

    printf ("Average time to run: %f seconds", timeAvrg / CLOCKS_PER_SEC);

    return 0;
}