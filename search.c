#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

#include "search.h"

/*
    divide array in half.
    if lower, divide left half in half
    if higher, divide right half in half
    recursive until found or return null
*/
int* binarySearch(int* array, int len, int value) {
    if (len < 1) return NULL;
    if (array[len/2] == value) {
        return &array[len/2];
    } else if (array[len/2] < value) {
        int* r = array + len/2;
        return binarySearch(r, (len-len/2), value);
    } else if (array[len/2] > value) {
        return binarySearch(array, len/2, value);
    } else assert(false);
}
