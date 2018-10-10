#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "list.h"

int main(){
  srand(time(NULL));
  struct node * list = 0;
  printf("Printing null list\n");
  print_list(list);

  list = malloc(sizeof(struct node));
  list->i = 42;
  list->next = 0;
  printf("New linked list:\n");
  print_list(list);
  while(i<5){
    list = insert_front(head,rand()%1000);
  }
  printf("Printing list:\n");
  print_list(list);
  
  printf("Free list:\n");
  list = free_list(list);
    
  printf("Printing freed list\n");
  print_list(list);

  return 0;
}
