#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* root, *newnode, *temp, *left, *right;
struct node* create();
void postOrder(struct node* Node)
{
    if (Node == NULL) return;

    printf("%d ", Node->data);

    preOrder(Node->prev);
    preOrder(Node->next);
}
int main()
{
    root = NULL;
    root = create();
    postOrder(root);

    return 0;
}
struct node* create()
{
    int x;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data.\n");
    scanf("%d", &x);
    if (x == -1)
        return NULL;
    newnode->data = x;
    printf("Left part of %d...\n", x);
    newnode->prev = create();
    printf("Right part of %d...\n", x);
    newnode->next = create();
}
