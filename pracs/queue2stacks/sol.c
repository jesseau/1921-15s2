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
    Queue q = (Queue) malloc(sizeof(Queue));
    q->s1 = emptyStack();
    q->s2 = emptyStack();

    return q;
}

void queue(Queue q, int data) {
    push(q->s1, data);
}

int dequeue(Queue q) {
    int i;
    for (i = height(q->s1); i > 1; i--) {
        push(q->s2, pop(q->s1));
    }

    // the item we actually want is the *only* element on s1
    int result = pop(q->s1);

    // everything's currently on s2, put it back on s1
    while (!isEmpty(q->s2)) {
        push(q->s1, pop(q->s2));
    }

    return result;
}

int isQueueEmpty(Queue q) {
    return isEmpty(q->s1) && isEmpty(q->s2);
}
