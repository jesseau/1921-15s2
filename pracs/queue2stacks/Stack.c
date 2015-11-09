// Stack Implementation ... COMP1921 15s2

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "Stack.h"

// make an empty Stack
Stack emptyStack() {
	Stack new = (Stack)malloc(sizeof(StackRep));
	assert(new != NULL);
	new->height = 0;
	new->nodes = NULL;

	return new;
}

// # values in Stack
int height(Stack s) {
	return s->height;
}

// is Stack empty?
int isEmpty(Stack s) {
	return (s->height == 0);
}

// add value on top 
void push(Stack s, int v) {
	StackNode *new = (StackNode *)malloc(sizeof(StackNode));
	assert(new != NULL);

	new->value = v;
	new->next = s->nodes;
	s->nodes = new;
	s->height++;
}

// remove top value
int pop(Stack s) {
	StackNode *top = s->nodes;
	int v = top->value;

	s->nodes = top->next;
	free(top);
	s->height--;
	return v;
}

// show Stack
void show(Stack s) {
	assert(s != NULL);
	StackNode *p;

	for (p = s->nodes; p != NULL; p = p->next) {
		if (p != s->nodes) {
			putchar(' ');
		}
		printf("%d", p->value);
	}
	putchar('\n');
}
