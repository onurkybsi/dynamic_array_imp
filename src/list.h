#ifndef _LIST_H
#define _LIST_H

#define list_t(T)            \
    struct                   \
    {                        \
        T *storage_array;    \
        int count, capacity; \
    }

#define unpack_list(list) \
    (char **)&(list)->storage_array, &(list)->count, &(list)->capacity, sizeof(*(list)->storage_array)

#define push_to_list(list, val) \
    (expand_list_if_necessary(unpack_list(list)) ? -1 : (list)->storage_array[(list)->count++] = (val), 0), 0)

typedef list_t(int) list_int;

#endif