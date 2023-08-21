#include "sort.h"
/**
 * _swap - swaps the placement of two integers using temporary variable
 * @xp: pointer to first integer
 * @yp: pointer to second integer
 */
 void _swap(int *xp, int *yp)
 {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
 }
