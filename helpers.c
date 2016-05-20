/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // Verify n is non-negative
    if (n < 0)
    {
        return false;
    }
    
    // Iterate through values looking for value
    for (int i = 0; i < n; i++)
    {
        if (values[i] == value)
        {
            return value;
        }
    }
    
    // If neither of the above is satisfied, return false
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    return;
}