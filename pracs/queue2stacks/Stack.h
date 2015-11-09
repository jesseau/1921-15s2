// Stack Interface ... COMP1921 15s2

// nodes containing individual values in Stack

typedef struct stackNode {
	int value;
	struct stackNode *next;
} StackNode;

// internal representation of Stacks

typedef struct stackRep {
	StackNode *nodes;
	int height;
} StackRep;

// user view of Stacks ... they just see a pointer

typedef StackRep *Stack;

Stack emptyStack();        // make an empty Stack
int height(Stack s);       // # values in Stack
int isEmpty(Stack s);      // is Stack empty?
void push(Stack s, int v); // add value on top 
int pop(Stack s);          // remove top value
void show(Stack s);        // show Stack
