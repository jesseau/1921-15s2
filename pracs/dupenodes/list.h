typedef struct node {
   int data;
   struct node *next;
} NodeT;

NodeT *dupeNodes(NodeT *);
void   printList(NodeT *);
int    length(NodeT *);
NodeT *makeNode(int);
NodeT *insertTail(NodeT *, int);
void   freeList(NodeT *);
