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

    // pop_from_list(&list);
    // pop_from_list(&list);

    // list_for_each(&list, int_printer);

#pragma endregion

#pragma region list_void_ptr
    list_void_ptr list;
    construct_list(&list);
    test item1 = {13};
    push_to_list(&list, &item1);
    test item2 = {29};
    push_to_list(&list, &item2);

    list_for_each(&list, test_printer);
#pragma endregion

    return 0;
}