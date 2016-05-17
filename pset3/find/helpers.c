/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
// Алгоритм поиска

    for (int i = 0; i < n; i++)
    {
        if (values[i] == value)
        {
            return true;
        }
    }
    return false;
}





/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
// Это алгоритм сортировки массива
    for (int k = n; k > 0; k--)
    {
        for (int i = 1; i < k; i++)
        {
            if (values[i - 1] > values[i])
            {
                int x = values[i - 1];
                values[i - 1] = values[i];
                values[i] = x;
            }
        }
    }
    return;
}

/**
Результат автоматической проверки:
check50 2014.fall.pset3.find helpers.c
находится по адресу:
https://sandbox.cs50.net/checks/9ed4827e19e648c084b3435e57223bcb
*/
