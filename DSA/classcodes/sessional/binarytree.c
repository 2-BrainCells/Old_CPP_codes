#include <stdio.h>
#include <stdlib.h>
struct tree
{
    int data;
    struct tree *right;
    struct tree *left;
};
struct tree *buildTree(struct tree *root)
{
    root = (struct tree *)malloc(sizeof(struct tree));
    printf("Enter the data of the root = ");
    scanf("%d", &root->data);
    root->left = NULL;
    root->right = NULL;
    if (root->data == -1)
    {
        return 0;
    }
    printf("Enter the left side of the tree \n");
    root->left = buildTree(root->left);
    printf("Enter the right side of the tree \n");
    root->right = buildTree(root->right);
    return root;
}
void traversal(struct tree *root)
{
    if (root == NULL)
    {
        return;
    }
    traversal(root->left);
    printf("%d ", root->data);
    traversal(root->right);
}
int main()
{
    struct tree *root = NULL;
    root = buildTree(root);
    traversal(root);
    return 0;
}