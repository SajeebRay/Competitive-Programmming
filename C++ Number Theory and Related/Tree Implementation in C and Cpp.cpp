#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<cstdlib>
#include<algorithm>

using namespace std;

//
//*** Using C Language
//
struct node{
    int data;
    struct node *right;
    struct node *left;
};

struct node *root;
void insert_tree(int n)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->left = nullptr;
    newnode->right = nullptr;
    if (!root)
        root = newnode;
    else{
        struct node *temp = root;
        while (1){
            if (temp->data >= newnode->data){ //left
                if (temp->left == nullptr){
                    temp->left = newnode;
                    break;
                }
                else
                    temp = temp->left;
            }
            else { //right
                if (temp->right == nullptr){
                    temp->right = newnode;
                    break;
                }
                else
                    temp = temp->right;
            }
        }
    }
}
void preOrder(struct node* Node)
{
    if (Node == nullptr) return;

    cout << Node->data << " ";

    preOrder(Node->left);
    preOrder(Node->right);
}
void postOrder(struct node* Node)
{
    if (Node == nullptr) return;

    postOrder(Node->left);
    postOrder(Node->right);

    cout << Node->data << " ";
}
void inOrder(struct node* Node)
{
    if (Node == nullptr) return;

    inOrder(Node->left);
    cout << Node->data << " ";
    inOrder(Node->right);
}
int main()
{
    root = nullptr;
    int n;
    cout << "Input until find -1 ";
    while (1){
        cin >> n;
        if (n == -1)
            break;
        else
            insert_tree(n);
    }
    cout << "Pre Order treverse: ";
    preOrder(root);
    cout << endl << "In Order treverse: ";
    inOrder(root);
    cout << endl  << "Post Order treverse: ";
    postOrder(root);
    cout << endl;

    return 0;
}
//      16 19 58 37 32 20 11 5 1 8 18 45 70 60 -1
