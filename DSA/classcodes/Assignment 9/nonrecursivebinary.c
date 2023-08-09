#include <stdio.h>
#include <stdlib.h>
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
struct tree *build(struct tree *root)
{
    int val;
    printf("Enter the value of the = ");
    scanf("%d", &val);
    root = (struct tree *)malloc(sizeof(struct tree));
    root->data = val;
    root->left = NULL;
    root->right = NULL;
    if (val == -1)
    {
        return NULL;
    }
    printf("Enter the data for inserting in left \n");
    root->left = build(root->left);
    printf("Enter the data for inserting in right \n");
    root->right = build(root->right);
    return root;
}
void inOrderTraversal(struct tree *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    printf("%d ", root->data);
    inOrderTraversal(root->right);
}
void preOrderTraversal(struct tree *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    inOrderTraversal(root->left);
    inOrderTraversal(root->right);
}
void postOrderTraversal(struct tree *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    inOrderTraversal(root->right);
    printf("%d ", root->data);
}
int main()
{
    struct tree *root = NULL;
    root = build(root);
    inOrderTraversal(root);
    return 0;
}