#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

struct node* create()
{
    struct node* newnode;
    int x;
    printf("Enter data: ");
    scanf("%d", &x);
    if (x == -1)
        return NULL;

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    printf("Left part of %d: ", x);
    newnode->prev = create();
    printf("Right part of %d: ", x);
    newnode->next = create();

    return newnode;
}
void inOrder(struct node* Node)
{
    if (Node != NULL){
        inOrder(Node->prev);

        printf("%d ", Node->data);
        inOrder(Node->next);
    }
}
void preOrder(struct node* Node)
{
    if (Node != NULL){
        printf("%d ", Node->data);

        preOrder(Node->prev);
        preOrder(Node->next);
    }
}
void postOrder(struct node* Node)
{
    if (Node != NULL){
        postOrder(Node->prev);
        postOrder(Node->next);

        printf("%d ", Node->data);
    }
}
int main()
{
    struct node* root;
    root = NULL;
    root = create();
    printf("\n");
    preOrder(root);  // 20 11 5 1 8 18 16 19 58 37 32 45 70 60
    printf("\n");
    inOrder(root);   // 1 5 8 11 16 18 19 20 32 37 45 58 60 70
    printf("\n");
    postOrder(root); // 1 8 5 16 19 18 11 32 45 37 60 70 58 20
    printf("\n");
    return 0;
}
//input  20 11 5 1 -1 -1  8 -1 -1  18 16 -1 -1  19 -1 -1  58 37 32 -1 -1 45 -1 -1  70 60 -1 -1  -1
