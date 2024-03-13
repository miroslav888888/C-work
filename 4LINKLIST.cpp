#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left = NULL;
    node *right = NULL;
    node(){};
    node(int tempdata, node *templeft, node *tempright) : data(tempdata), left(templeft), right(tempright){};
};
void preorder(node *x)
{
    cout << x->data << " ";
    if (x->left != NULL) preorder(x->left);
    if (x->right != NULL)preorder(x->right);
    
}
void inorder(node *x)
{
    if (x->left != NULL) inorder(x->left);
    else
    {
        cout << x->data << " ";
        return;
    }
    cout << x->data << " ";
    if (x->right != NULL)inorder(x->right);
    else
    {
        cout << x->data << " ";
        return;
    }
    return;
}
void postorder(node *x)
{
    if (x->left != NULL) postorder(x->left);
    else
    {
        cout << x->data << " ";
        return;
    }
    if (x->right != NULL)postorder(x->right);
    else
    {
        cout << x->data << " ";
        return;
    }
    cout << x->data << " ";
    return;
}
int value[4] = {8, 88, 888, 8888};
void init(node *father, int level);

int main()
{
    node node1(value[0], NULL, NULL);
    init(&node1, 0);
    inorder(&node1);
    cout<<"\n";
    postorder(&node1);
    cout<<"\n";
    preorder(&node1);
    return 0;
}

void init(node *father, int level)
{

    if (level == 3)
        return;
    else
    {
        father->left = new node(value[++level], NULL, NULL);
        father->right = new node(value[level], NULL, NULL);
        init(father->left, level);
        init(father->right, level);
    }
}
