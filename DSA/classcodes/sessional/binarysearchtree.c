#include <stdio.h>
#include <stdlib.h>
struct btree
{
    int data;
    struct btree *right;
    struct btree *left;
};
// struct btree *root = NULL;
struct btree *insert(struct btree *root, int data)
{
    if (root == NULL)
    {
        root = (struct btree *)malloc(sizeof(struct btree));
        printf("Enter the data of the root = ");
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    else
    {
        root->left = insert(root->left, data);
    }
    return root;
}
void buildtree(struct btree *root)
{
    int data;
    scanf("%d", &data);
    while (data != -1)
    {
        insert(root, data);
        scanf("%d", &data);
    }
}
void traversal(struct btree *root)
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
    struct btree *root = NULL;
    printf("%d", root);
    buildtree(root);
    printf("%d", root);

    printf("\nPrint the\n", root);
    traversal(root);
    // free(root);
    return 0;
}