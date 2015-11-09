#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

int main(int argc, char *argv[]) {
    NodeT *list1 = NULL;
    NodeT *list2 = NULL;
    NodeT *list3 = NULL;
    NodeT *temp = NULL;

    // TEST 1
    printf("Test 1: ");
    printList(list1);
    printf("Expected output: X\n");
    list1 = dupeNodes(list1);
    printf("Actual output: ");
    printList(list1);
    printf("If your actual output differs assertions will fail\n");
    assert(list1 == NULL);
    printf("Test 1 passed!\n\n");

    // TEST 2
    int i;
    for (i = 1; i <= 3; i++) {
        list2 = insertTail(list2, i);
    }
    printf("Test 2: ");
    printList(list2);
    printf("Expected output: 1->1->2->2->3->3->X\n");
    list2 = dupeNodes(list2);
    printf("Actual output: ");
    printList(list2);
    printf("If your actual output differs assertions will fail\n");
    temp = list2;
    assert(temp->data == 1); temp = temp->next;
    assert(temp->data == 1); temp = temp->next;
    assert(temp->data == 2); temp = temp->next;
    assert(temp->data == 2); temp = temp->next;
    assert(temp->data == 3); temp = temp->next;
    assert(temp->data == 3); temp = temp->next;
    assert(temp == NULL);
    printf("Test 2 passed!\n\n");

    // TEST 3
    list3 = insertTail(list3, 1);
    printf("Test 3: ");
    printList(list3);
    printf("Expected output: 1->1->X\n");
    list1 = dupeNodes(list3);
    printf("Actual output: ");
    printList(list3);
    printf("If your actual output differs assertions will fail\n");
    assert(list3->data == 1);
    assert(list3->next->data == 1);
    assert(list3->next->next == NULL);
    printf("Test 3 passed!\n\n");

    freeList(list1);
    freeList(list2);
    freeList(list3);

    printf("All tests passed. You are awesome!\n");

    return EXIT_SUCCESS;
}
