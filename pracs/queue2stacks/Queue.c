#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include "Queue.h"

/*
 * TODO: Figure out how to implement this queue ADT using 2 stacks.
 * You'll need to have a look at Queue.h and Stack.h in order to do this question.
 *
 * When implementing dequeue you don't need to check whether the queue is
 * empty, just assume there's always something in the queue.
 *
 * This program *will* have memory leaks - don't worry. Just make it work.
 *
 * Compile using: gcc -Wall -Werror -O -o testQueue Queue.c Stack.c testQueue.c
 * Run using: ./testQueue
 */

Queue emptyQueue() {
    // IMPLEMENT THIS
    return NULL;
}

void queue(Queue q, int data) {
    // IMPLEMENT THIS
}

int dequeue(Queue q) {
    // IMPLEMENT THIS
    return 0;
}

int isQueueEmpty(Queue q) {
    // IMPLEMENT THIS
    return 0;
}
