/*****************************************************************//**
 * \file   SourceII.c
 * \brief  Random Numbers
 * This program seeds the random-number generator with the time, 
 * then execute the rand function.
 * \author lufer
 * \date   December 2020
 *********************************************************************/


#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void SimpleRandDemo(int n)
{
    // Print n random numbers.
    int i;
    for (i = 0; i < n; i++)
        printf("  %6d\n", rand());
}

void RangedRandDemo(int range_min, int range_max, int n)
{
    // Generate random numbers in the half-closed interval
    // [range_min, range_max). In other words,
    // range_min <= random number < range_max
    int i;
    for (i = 0; i < n; i++)
    {
        int u = (double)rand() / (RAND_MAX + 1) * (range_max - range_min)
            + range_min;
        printf("  %6d\n", u);
    }
}

int main2(void)
{
    // Seed the random-number generator with the current time so that
    // the numbers will be different every time we run.
    //srand((unsigned)time(NULL));
    //srand(1); sequence of randon numbers will be equal!

    SimpleRandDemo(10);
    printf("\n");
    RangedRandDemo(-100, 100, 10);
}