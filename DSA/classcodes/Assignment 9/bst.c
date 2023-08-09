#include <stdio.h>
#include <stdlib.h>
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
struct tree *buildtree(struct tree *root, int data)
{
    if (root == NULL)
    {
        root = (struct tree *)malloc(sizeof(struct tree));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    if (root->data > data)
    {
        root->left = buildtree(root->left, data);
    }
    else
    {
        root->right = buildtree(root->right, data);
    }
    return root;
}
void inOrderTravesal(struct tree *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderTravesal(root->left);
    printf("%d ", root->data);
    inOrderTravesal(root->right);
}
void preOrderTraversal(struct tree *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    preOrderTravesal(root->left);
    preOrderTravesal(root->right);
}
struct tree *insertion(struct tree *root)
{
}
int main()
{
    struct tree *root = NULL;
    int data;
    scanf("%d", &data);
    while (data != -1)
    {
        root = buildtree(root, data);
        scanf("%d", &data);
    }
    inOrderTravesal(root);
    free(root);
    return 0;
}