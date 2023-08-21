#include "sort.h"
/**
* swap - swaps two elements of an array
* @xp: pointer to first integer
* @yp: pointer to second integer
*/
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}