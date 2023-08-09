#include <iostream>
#include <queue>
using namespace std;
class tree
{
public:
    int data;
    tree *right;
    tree *left;
    tree(int data)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};
tree *insertIntoBST(tree *&root, int data)
{
    if (root == NULL)
    {
        root = new tree(data);
        return root;  
    }
    if (data > root->data)
    {
        root->right = insertIntoBST(root->right, data);
    }
    else
    {
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}
void buildTree(tree *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        insertIntoBST(root, data);
        cin >> data;
    }
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
int main()
{
    tree *root = NULL;
    cout << int(root);
    cout << "Insert Data" << endl;
    buildTree(root);
    cout << int(root);
    cout << "Printing BST" << root << endl;
    // levelOrderTraveral(root);
    inOrderTravesal(root);
    return 0;
}