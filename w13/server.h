typedef struct node{
    int data;
    struct node * link;
} Node;

Node *HEAD;

void display_list();
void insert_beg(int);
void insert_end(int);
void sum();
void sum_alternate();
void sum_eo();

