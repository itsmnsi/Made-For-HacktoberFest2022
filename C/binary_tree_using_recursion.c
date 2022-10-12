#include <stdio.h>
#include <stdlib.h>

struct Node1
{
    struct Node1 *left;
    int data;
    struct Node1 *right;
};

//void preorder(struct Node1 *p);

struct Node1 *root=NULL;

struct Node1* buildTree(struct Node1* root){
    root = (struct Node1*)malloc(sizeof(struct Node1));
    printf("Enter the data to be entered:\n");
    int x;
    scanf("%d", &x);
    root -> data = x;

    if(x==-1){
        return NULL;
    }

    printf("Enter the data to the left of %d[Enter -1 for a NULL Element]\n", x);
    root->left = buildTree(root->left);
    printf("Enter the data to the right of %d[Enter -1 for a NULL Element]\n", x);
    root->right = buildTree(root->right);
    return root;
}

void preorder(struct Node1 *p)
{
    if(p)
    {
    printf("%d", p->data);
    preorder(p->left);
    preorder(p->right);
    }
}

int main()
{

    struct Node1 *first=buildTree(root);
    
    preorder(first);

    return 0;
}