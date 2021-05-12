#ifndef LIST_H
#define LIST_H

#include "./list_types.h"

#define list_t(T)            \
    struct                   \
    {                        \
        T *storage_array;    \
        int count, capacity; \
    }

#define construct_list(list) \
    memset((list), 0, sizeof(*(list)))

#define unpack_list(list) \
    (char **)&(list)->storage_array, &(list)->count, &(list)->capacity, sizeof(*(list)->storage_array)

#define push_to_list(list, val) \
    (expand_list_if_necessary(unpack_list(list)) ? -1 : ((list)->storage_array[(list)->count++] = (val), 0), 0)

#define list_for_each(list, func_pointer)       \
    for (int i = 0; i < (list)->count; i++)     \
    {                                           \
        func_pointer((list)->storage_array[i]); \
    }

#define pop_from_list(list) \
    (list)->storage_array[--(list)->count]

int expand_list_if_necessary(char **storage_array, int *count, int *capacity, int size_of_stored);

typedef list_t(void *) list_void_ptr;
typedef list_t(int) list_int;

#endif