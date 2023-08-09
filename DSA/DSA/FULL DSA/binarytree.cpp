#include <iostream>
#include <queue>
using namespace std;
class tree
{
public:
    int data;
    tree *left;
    tree *right;
    tree(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
tree *buildTree(tree *root)
{
    int data;
    cout << "Enter the data = ";
    cin >> data;
    root = new tree(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting in left " << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right   " << endl;
    root->right = buildTree(root->right);
    return root;
}
void levelOrderTraveral(tree *root)
{
    queue<tree *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        tree *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            // previous level completed
            cout << endl;
            if (!q.empty())
            {
                // some child nodes left
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
// void reverseLevelOrder(tree *root)
// {
//     queue<tree *> q;
//     if()
// }
void inOrderTravesal(tree *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderTravesal(root->left);
    cout << root->data << " ";
    inOrderTravesal(root->right);
}
void preOrderTraversal(tree *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void postOrderTravesal(tree *root)
{
    if (root == NULL)
    {
        return;
    }
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
    cout << root->data << " ";
}
int main()
{
    tree *root = NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // levelOrderTraveral(root);
    inOrderTravesal(root);
    // preOrderTraversal(root);
    // postOrderTravesal(root);
    return 0;
}