#include <iostream>
#include <time.h>

using namespace std;

int i = 1;
int c = -2;
char player1_flag,player2_flag;
struct stack
{
    char data;
    char colour;
    struct stack *link;
};
struct stack *top;

struct hand
{
    char data;
    char colour;
    struct hand *link;
};
hand *player1 = NULL, *player2 = NULL;

char num[] = {'1', '2', '4', '3', '5', '7', '6', '8', '9', '0', 'S', 'R', '+', 'W', 'w'};
char colour[] = {'r', 'g', 'b', 'y'};

void shuffle()
{
    struct stack *temp;
    temp = new stack;
    temp->data = num[rand() % 15];
    temp->colour = colour[rand() % 4];
    temp->link = top;
    top = temp;
}

void stack_pop(char *data, char *colour)
{
    stack *temp = top;
    *data = top->data;
    *colour = top->colour;
    top = temp->link;
    temp->link = NULL;
    delete temp;
    i++;
}
void hand_append(hand **player)
{
    char data, colour;
    struct hand *temp;
    temp = new hand;
    stack_pop(&data, &colour);
    temp->data = data;
    temp->colour = colour;
    temp->link = NULL;
    if (*player == NULL)
    {
        *player = temp;
        cout << "player1= " << player1 << "\n"
             << "player2= " << player2 << endl;
    }
    else
    {
        hand *p = *player;
        while (p->link != NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
}

void stack_append(int data, char colour)
{
    struct stack *temp;
    temp = new stack;
    temp->data = data;
    temp->colour = colour;
    temp->link = top;
    top = temp;
    cout << "***top = " << top->data << "-" << top->colour << endl;
}
void print_hand(struct hand **x)
{
    int p = 1;
    hand *temp = *x;
    while (temp != NULL)
    {
        // printf("%d) %c-%c\t",p,temp->data,temp->colour);
        cout << p << ")" << temp->data << "-" << temp->colour << endl;
        temp = temp->link;
        p++;
    }
    cout << endl;
    cout << "***top = " << top->data << "-" << top->colour << endl;
    cout << endl;
}

void delete_hand(int x, struct hand **player)
{
    hand *p = *player;
    if (x == 1){
        if(p->data=='+' && p->colour== top->colour){

        }
        if(p->data==top->data || p->colour==top->colour){
        stack_append(p->data,p->colour);
        *player = p->link;
        p->link = NULL;
        delete p;
        }
        else{
            cout<<"you have not entered the right card \n try again"<<endl;
            cin>>c;
            delete_hand(c,player);

        }
    }
    else if (x == 0)
        {
            hand_append(&p);
        }
    else
    {

        if (p->link->data == top->data || p->link->colour == top->colour)
        {   for(int i = 1; i <= x - 2; i++)
                p = p->link;
            stack_append(p->link->data, p->link->colour);
            hand *temp;
            temp = p->link;
            p->link = temp->link;
            temp->link = NULL;
            delete temp;
        }
        else{
            cout<<"you have not entered the right card \n try again"<<endl;
            cin>>c;
            delete_hand(c,player);

        }
    }
}
int main()
{
    srand(time(NULL));
    for (int i = 0; i < 22; i++)
        shuffle();
    for (int i = 0; i < 10; i++)
    {
        hand_append(&player1);
        hand_append(&player2);
    }
    while (c != 99)
    {
        cout << "player1 turn" << endl
             << endl;
        print_hand(&player1);
        cin >> c;
        delete_hand(c, &player1);
        cout << "player2 turn" << endl
             << endl;
        print_hand(&player2);
        cin >> c;
        delete_hand(c, &player2);
    }
}