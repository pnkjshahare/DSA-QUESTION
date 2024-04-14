#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *BuildTree(Node *root)
{
    cout << "Enter the data :" << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data for left of tree" << data << endl;
    root->left = BuildTree(root->left);
    cout << "Enter the data for right of tree" << data << endl;
    root->right = BuildTree(root->right);
    return root;
}
int maxheight(Node *root)
{
    if (root == NULL)
        return 0;
    int lefthand = maxheight(root->left);
    if (lefthand == -1)
        return -1;
    int righthand = maxheight(root->right);
    if (righthand == -1)
        return -1;
    if (abs(lefthand - righthand) > 1)
        return -1;
    return 1 + max(lefthand, righthand);
}
bool isBalanced(Node *root)
{
    return maxheight(root) != -1;
}
int main()
{
    Node *root = NULL;
    root = BuildTree(root);
    cout <<"Tree balaneced :"<< isBalanced(root);
}