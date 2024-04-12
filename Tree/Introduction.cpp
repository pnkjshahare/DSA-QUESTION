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
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int levelOrder(Node * root){
    if(root==NULL)return 0;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        for(int i=0;i<size;i++){
            Node* node=q.front();
            q.pop();
            if(node->left!=NULL){
                q.push(node->left);
            }
            if(node->right!=NULL){
                q.push(node->right);
            }
            cout<<node->data<<" ";
        }
        cout<<endl;
    }
}
int preorderIterative(Node *root){
    if(root==NULL){
        return 0;
    }
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        root=st.top();
        st.pop();
        cout<<root->data<<" ";
        if(root->right!=NULL){
            st.push(root->right);
        }
        if(root->left!=NULL){
            st.push(root->left);
        }
    }
}
void Inorder(Node * root){
    Node * node=root;
    stack<Node*>st;
    while(true){
        if(node!=NULL){
            st.push(node);
            node=node->left;
        }
        else{
            if(st.empty()==true)break;
            node=st.top();
            st.pop();
            cout<<node->data<<" ";
            node=node->right;
        }
    }
}
int main()
{
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    Node *root = NULL;
    root = BuildTree(root);
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;
    cout << "preorder Traversal: ";
    preorder(root);
    cout << endl;
    cout << "postorder Traversal: ";
    postorder(root);
    cout<<endl;
    cout<<"Levelorder :"<<endl;
    levelOrder(root);
    cout<<endl;
    cout<<"Preorder Iterative :";
    preorderIterative(root);
    cout<<endl;
    cout<<"Inorder traversal :";
    inorder(root);
    return 0;
}