#include <stdlib.h>
#include "../list.h"

#define ARRAY_GROWTH_RATE 1.5

int expand_list_if_necessary(char **storage_array, int *count, int *capacity, int size_of_stored)
{
    if (*count + 1 < *capacity)
        return 0;

    void *ptr;
    int new_capacity = (*capacity == 0) ? 1 : ((int)(float)(*capacity) * ARRAY_GROWTH_RATE) + 1;
    ptr = realloc(*storage_array, new_capacity * size_of_stored);
    if (ptr == NULL)
        return -1;

    *storage_array = ptr;
    *capacity = new_capacity;

    return 0;
}

void splice_list(char **storage_array, int *count, int *capacity, int item_memory_size,
                 int start, int range)
{
    memmove(*storage_array + start * item_memory_size,
            *storage_array + (start + 1) * item_memory_size,
            ((*count - start) + range) * item_memory_size);
}