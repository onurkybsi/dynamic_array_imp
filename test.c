#include <stdio.h>
#include <stdlib.h>
#include "./src/list.h"

int main()
{
    list_int test;
    init_list(&test);
    push_to_list(&test, 1);
    push_to_list(&test, 2);
    push_to_list(&test, 3);
    push_to_list(&test, 4);

    for (int i = 0; i < test.count; i++)
    {
        printf("%d\n", test.storage_array[i]);
    }

    return 0;
}