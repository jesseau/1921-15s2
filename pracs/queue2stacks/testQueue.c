#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Stack.h"
#include "Queue.h"

#define TEST1 10

int main(int argc, char *argv[]) {
    printf("Creating queue... ");
    Queue q = emptyQueue();
    assert(q != NULL);
    printf("OK\n");

    printf("Checking if queue is empty... ");
    assert(isQueueEmpty(q));
    printf("OK\n");

    printf("Adding 1..%d to queue... ", TEST1);
    int i;
    for (i = 1; i <= TEST1; i++) {
        queue(q, i);
        assert(!isEmpty(q->s1) || !isEmpty(q->s2));
    }
    printf("OK\n");

    printf("Removing 1..%d from queue... ", TEST1);
    for (i = 1; i <= TEST1; i++) {
        assert(dequeue(q) == i);
    }
    printf("OK\n");

    printf("Checking if queue is empty... ");
    assert(isQueueEmpty(q));
    printf("OK\n");

    printf("All tests passed. You are awesome!\n");

    return EXIT_SUCCESS;
}
