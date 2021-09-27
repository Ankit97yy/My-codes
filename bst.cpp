#include <iostream>
using namespace std;
struct bst
{
    int data;
    struct bst *left, *right;
};
struct bst *root;

int insertion()
{
    int num;
    struct bst *temp, *p;
    cout << "enter a number" << endl;
    cin >> num;
    temp= new struct bst[sizeof(struct bst)];
    temp->data = num;
    temp->left=NULL;
    temp->right=NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        p = root;
        while (1)
        {
            if (num > p->data)
            {
                if (p->right == NULL)
                {
                    p->right = temp;
                    break;
                }
                p = p->right;
            }
            else if (num <= p->data)
            {
                if (p->left == NULL)
                {
                    p->left = temp;
                    break;
                }

                p = p->left;
            }
        }
    }
}

    void search()
    {
        cout<<"enter a number to be searched "<<endl;
        int num;
        cin>>num;
        struct bst *p=root;
        while(1){
            if(p->data==num){
                cout<<"item found"<<endl;
                break;
            }
            else if(p->data<num){
                if(p->right==NULL){
                    cout<<"item not found"<<endl;
                    break;
                }
               p=p->right;
            }
            else{
                if(p->left==NULL){
                    cout<<"item not found"<<endl;
                    break;
                }
                p=p->left;
            }
        }
    }

   void switchcase(int x){
      switch (x)
      {
      case 1:
          insertion();
          break;
      case 2:
          search();
          break;
  
      default:
          break;
      }
  }
  int main(){
      int num;
      while(num!=3){
      printf("enter 1 to append\nenter 2 to search\n");
      scanf("%d",&num);
      switchcase(num);
      }
  }
    

    