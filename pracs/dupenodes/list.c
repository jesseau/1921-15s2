// List operations ... COMP1921 15s2

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

/*
 * TODO: Implement me.
 * For every node in the linked list, create a copy of it and link it.
 * A new list shouldn't be created - the additional nodes should be added
 * within the existing list.
 * So if head = 1 2 3, dupeNodes(head) = 1 1 2 2 3 3
 * head = NULL, dupeNodes(head) = NULL
 * head = 5 5 5 5 5, dupeNodes(head) = 5 5 5 5 5 5 5 5 5 5
 */
NodeT *dupeNodes(NodeT *head) {
    // IMPLEMENT ME
    return head;
}

void printList(NodeT *list) {
   NodeT *p;

   for (p = list; p != NULL; p = p->next) {
      printf("%d->", p->data);
   }
   printf("X\n");
}

int length(NodeT *list) {
   NodeT *p;

   int count = 0;
   for (p = list; p != NULL; p = p->next) {
      count++;
   }
   return count;
}

NodeT *makeNode(int v) {
   NodeT *new;

   new = malloc(sizeof(NodeT));
   assert(new != NULL);
   new->data = v;
   new->next = NULL;
   return new;
}

NodeT *insertTail(NodeT *head, int d) {
   NodeT *new = makeNode(d);

   if (head != NULL) {            // check if at least 1 node
      NodeT *cur;
      cur = head;                 // start at the head
      while (cur->next != NULL) { // this must be defined
         cur = cur->next;
      }
      cur->next = new;            // cur->next was NULL
   } else {
      head = new;                 // if no list, list = new
   }
   return head;
}

void freeList(NodeT *list) {
   NodeT *cur;

   cur = list;
   while (cur != NULL) {
      NodeT *tmp = cur->next;
      free(cur);
      cur = tmp;
   }
}
