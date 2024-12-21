#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;

};
struct node* createNode(int data)
{
    struct node* newNode = malloc(sizeof(struct node ));
    newNode -> data = data;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;

}
struct node* insertLeft(struct node* root,int data)
{
    root ->left = createNode(data);
    return root;
}
struct node* insertRight(struct node* root,int data)
{
    root ->right = createNode(data);
    return root;
}
void inorder(struct node* root)
{
    if (root==NULL) return;
    inorder(root -> left);
    printf("%d",root ->data);
    inorder(root ->right);
};
void preorder(struct node* root)
{
    if (root==NULL) return;
    printf("%d",root ->data);
    inorder(root -> left);
    inorder(root ->right);
};
void postorde(struct node* root)
{
    if (root==NULL) return;
    inorder(root -> left);
    inorder(root ->right);
    printf("%d",root ->data);
};
int main(){
     struct node* root=createNode(4);
     insertLeft(root,21);
     insertRight(root,13);
     insertLeft(root ->left,34);
     insertRight(root ->left,0);
     insertLeft(root ->right,18);
     insertRight(root ->right,19);

     printf("inorder traversal of the tree is :");
     inorder(root);
     printf("\n");

      printf("preorder traversal of the tree is :");
     preorder(root);
     printf("\n");

      printf("postorder traversal of the tree is :");
     postorde(root);
     printf("\n");
    return 0;
}