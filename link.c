#include <stdio.h>
#include <stdlib.h>

void print_list(struct node *x){
  struct node *head = x;
  while (head){
    printf("%d, ", head->i);
    head = head->next;
  }
}

struct node * insert_front(struct node * x, int new){
  struct node *new_node = malloc(sizeof(struct node));
  new_node->i = new;
  new_node->next = x;
  return new_node;
}

struct node * free_list(struct node * x){
  struct node * temp;
  struct node * head = x;
  while(head){
    temp = head->next;
    free(head);
    head = temp;
  }
  return head;
}
