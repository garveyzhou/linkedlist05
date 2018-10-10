struct node{int i;struct node * next;};
void print_list(struct node* x);
struct node * insert_front(struct node * x, int new);
struct node * free_list(struct node * x);
