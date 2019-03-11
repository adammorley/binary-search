#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "../merge-sort/sort.h"

#include "search.h"

int main() {
    int len = 16;
    int* a = malloc(sizeof(int)*len);
    if (a == NULL) assert(false);
    for (int i=0; i<len; i++) {
        a[i] = rand();
    }
    a[6] = 1649760495;
    a[7] = 2;
    a[8] = 1957747797;
    a = mergeSort(a, len);
    int* n = binarySearch(a, len, 1957747793);
    if (NULL == binarySearch(a, len, 1649760495)) assert(false);
    if (NULL == binarySearch(a, len, 2)) assert(false);
    if (NULL == binarySearch(a, len, 1957747797)) assert(false);
    if (NULL != binarySearch(a, len, -5)) assert(false);
}
