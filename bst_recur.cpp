#include <iostream>
using namespace std;
struct bst
{
    int data;
    bst *left, *right;
};
bst *root;

bst *node_creation(int num)
{
    bst *temp;
    temp = new bst();
    temp->data = num;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

bst *insertion(bst *root, int num)
{

    if (root == NULL)
        root = node_creation(num);
    else if (num > root->data)
        root->right = insertion(root->right, num);
    else
        root->left = insertion(root->left, num);
    return root;
}
void search(bst *root,int num)
{   if(root==NULL){
        cout<<"item not found"<<endl;
        return;
    }
    if(root->data==num)
        cout<<"item found"<<endl;
    else if(root->data>num)
        search(root->left,num);
    else
        search(root->right,num);

}

void switchcase(int x)
{
    int num;
    switch (x)
    {
    case 1:
        cout << "enter a number: " << endl;
        cin >> num;
        root = insertion(root, num);
        break;
    case 2:
        cout<<"enter a number to be searched"<<endl;
        cin>>num;
        search(root,num);
        break;

    default:
        break;
    }
}
int main()
{
    int num;
    while (num != 3)
    {
        printf("enter 1 to append\nenter 2 to search\n");
        scanf("%d", &num);
        switchcase(num);
    }
}
