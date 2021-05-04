#ifndef _LIST_H
#define _LIST_H

#define list_t(T)            \
    struct                   \
    {                        \
        T *storage_array;    \
        int count, capacity; \
    }

#define init_list(list) \
    memset((list), 0, sizeof(*(list)))

#define unpack_list(list) \
    (char **)&(list)->storage_array, &(list)->count, &(list)->capacity, sizeof(*(list)->storage_array)

#define push_to_list(list, val) \
    (expand_list_if_necessary(unpack_list(list)) ? -1 : ((list)->storage_array[(list)->count++] = (val), 0), 0)

int expand_list_if_necessary(char **storage_array, int *count, int *capacity, int size_of_stored);

typedef list_t(int) list_int;

#endif