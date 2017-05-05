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
    if ( n < 1)
    {
        return false;
    }
    int start = 0;
    int end = n-1;
     
    
    while (end >= start)
    {
        if ( end == start) 
        {
            if ( value == values [start])
            {  
                return true;
            }
            else 
            {
                return false;
            }    
        }
        int middle = (end + start)/2;
        
        if ( value == values[middle])
        {
            return true;
        }
        else if ( value < values[middle])
        {
            end = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */

void sort(int values[], int n)
{
    int i = 0;
    int swap_counter;
    while(i < (n*n))
    {
        swap_counter = 0;
        
        for (int j = 0; j < (n-1); j++)
        {
            if (values[j] > values[j+1])
            {
                int c = values[j+1];
                values[j+1] = values[j];
                values[j] = c;
                swap_counter = swap_counter+1;
            }
        }
        if (swap_counter != 0)
        {
            i++;
        }
        else
        {
            break;
        }
    }
    return;
}
    
