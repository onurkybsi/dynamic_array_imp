#include <stdio.h>
#include <stdlib.h>
#include "./src/list.h"

void int_printer(int val)
{
    printf("%d\n", val);
}

void test_printer(test *val)
{
    printf("%d\n", val->data);
}

// gcc -g ./src/imp/list.c ./test.c -o test.exe
int main()
{
#pragma region list_int
    // list_int list;
    // construct_list(&list);
    // push_to_list(&list, 1);
    // push_to_list(&list, 2);
    // push_to_list(&list, 3);
    // push_to_list(&list, 4);
    // push_to_list(&list, 5);
    // push_to_list(&list, 6);

    // pop_from_list(&list);
    // pop_from_list(&list);

    // printf("Initial address: %d\n", &list.storage_array[0]);
    // printf("End address: %d\n", &list.storage_array[list.count - 1]);
    // printf("Count of list: %d\n", list.count);
    // list_for_each(&list, int_printer);

    // int searchedIx;
    // get_first_index_of_val_from_list(&list, 4, searchedIx);
    // remove_at(&list, searchedIx);

    // printf("Initial address: %d\n", &list.storage_array[0]);
    // printf("End address: %d\n", &list.storage_array[list.count - 1]);
    // printf("Count of list: %d\n", list.count);
    // list_for_each(&list, int_printer);

#pragma endregion

#pragma region list_void_ptr
    // list_void_ptr list;
    // construct_list(&list);
    // test item1 = {13};
    // push_to_list(&list, &item1);
    // test item2 = {29};
    // push_to_list(&list, &item2);
    // test item3 = {32};
    // push_to_list(&list, &item2);

    // list_for_each(&list, test_printer);
    // int searchedIx;
    // get_first_index_of_val_from_list(&list, &item2, searchedIx);
    // test *searchedItem = (test *)list.storage_array[searchedIx];
    // printf("Searched item data is: %d", searchedItem->data);

#pragma endregion

    return 0;
}