typedef struct _queue {
    Stack s1;
    Stack s2;
} QueueRep;

typedef QueueRep *Queue;

Queue emptyQueue();         // create an empty queue    
void queue(Queue, int);     // add number onto queue
int dequeue(Queue);         // remove number from queue
int isQueueEmpty(Queue);    // is queue empty?
