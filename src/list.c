#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

typedef struct node {
  int data;
  struct node *next;
} node;

void add(node *head, int x){
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/
  assert(head!=NULL);
  node *p = head;
  while (p->next!=NULL) {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node*) malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element; 
}

int size(node *l){
    // Excercise 3b)
    // Returns the amount of elements in the list
    int a = 0;
    assert(l!=NULL);
    node *h = l;
    //While h does not point to NULL it sets h is set to the next element and 1 is added to the counter a
    while (h->next!=NULL) {
      h = h->next;
      a = a + 1;
    }
    return a;
}

void printout(node *l) {
  /*Excercise 3d) Implement your changes.. 
    pre: head points to the first, empty element. The last element's next is NULL
    post: the values of the list are printed out*/
    node *p = l->next;
    while (p!=NULL){
      printf("%d, ",p->data);
      p = p->next;
    }
    printf("\n");
}

int largest(node *l){
    /*Excercise 3e) Add your code below.
      pre: head points to the first, empty element. The last element's next is NULL. size(l>0)
      post: returns the largest value of the list*/
  node *p = l->next;
  int a = p->data;
  while (p !=NULL) {
    if (p->data > a )
      a = p->data;
    p = p->next;
  }
    return a; 
}


