#include <stdlib.h>
#include "list.h"

#define ARRAY_GROWTH_RATE 1.5

int expand_list_if_necessary(char **storage_array, int *count, int *capacity, int size_of_stored)
{
    if (*count + 1 < *capacity)
        return 0;

    void *ptr;
    int new_count = (*capacity == 0) ? 1 : (int)((float)(*capacity) * ARRAY_GROWTH_RATE);
    ptr = realloc(*storage_array, new_count * size_of_stored);
    if (ptr == NULL)
        return -1;

    *storage_array = ptr;
    *capacity = new_count;

    return 0;
}