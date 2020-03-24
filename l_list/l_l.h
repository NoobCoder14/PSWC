typedef struct node{
    int data;
    struct node * link;
} Node;

Node * HEAD;
void insert_beg(int);
void insert_after(int);
void insert_at(int,int);
void delete_beg();
void delete_end();
void delete_at(int);
void sort_list();
void search_list(int);
void display_list();

