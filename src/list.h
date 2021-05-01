#ifndef _LIST_H
#define _LIST_H

#define list_t(T)            \
    struct                   \
    {                        \
        T *storage_array;    \
        int count, capacity; \
    }

#endif