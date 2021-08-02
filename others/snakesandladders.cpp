#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int player1_score = 0, player2_score = 0, temp;
char player1_name[10], player2_name[10];
int random()
{
    srand(time(0));
    return rand() % 6 + 1;
}
int delay()
{
    for (int i = 0; i < 10000000; i++)
    {
    }
    return 0;
}
int check(int *x, char name[10])
{
    if (*x == 2)
    {
        *x = 15;
        cout << name << " has found a ladder and moved:" << *x << endl
             << endl;
    }
    else if (*x == 5)
    {
        *x = 7;
        cout << name << " has found a ladder and moved:" << *x << endl
             << endl;
    }
    else if (*x == 9)
    {
        *x = 27;
        cout << name << " has found a ladder and moved:" << *x << endl
             << endl;
    }
    else if (*x == 18)
    {
        *x = 29;
        cout << name << " has found a ladder and moved:" << *x << endl
             << endl;
    }
    else if (*x == 25)
    {
        *x = 35;
        cout << name << " has found a ladder and moved:" << *x << endl
             << endl;
    }
    else if (*x == 17)
    {
        *x = 4;
        cout << name << " has found a snake and moved:" << *x << endl
             << endl;
    }
    else if (*x == 20)
    {
        *x = 6;
        cout << name << " has found a snake and moved:" << *x << endl
             << endl;
    }
    else if (*x == 24)
    {
        *x = 16;
        cout << name << " has found a snake and moved:" << *x << endl
             << endl;
    }
    else if (*x == 32)
    {
        *x = 30;
        cout << name << " has found a snake and moved:" << *x << endl
             << endl;
    }
    else if (*x == 34)
    {
        *x = 12;
        cout << name << " has found a snake and moved:" << *x << endl
             << endl;
    }
    else if (*x > 36)
    {
        *x = *x - temp;
        cout << "skipped" << endl
             << endl;
    }
    else
    {
        cout << "moved to: " << *x << endl
             << endl;
    }
    return 0;
}
int main()
{
    char game_name[30] = {"welcome to snakes and ladders"};
    for (int i = 0; i < 29; i++)
    {
        cout << game_name[i];
        delay();
    }
    char c;
    int flag = 0, flag2 = 0;
    cout <<endl<<endl<< "first player name: ";
    cin >> player1_name;
    cout << "second player name: ";
    cin >> player2_name;
    cout << "enter any character to roll the die" << endl
         << endl;
    for (int i = 0;; i++)
    {
        cout << player1_name << " roll";
        cin >> c;
        temp = random();
        cout << player1_name << "s die rolled to: " << temp << endl;
        if (temp != 1 and flag == 0)
        {
            cout << player1_name << " needs 1 to start the game" << endl
                 << endl;
        }
        else
        {
            flag = 1;
        }
        if (flag == 1)
        {
            player1_score += temp;
            check(&player1_score, player1_name);
            cout << "**" << player1_name << ": " << player1_score << "** **" << player2_name << ": " << player2_score << "**" << endl
                 << endl;
            if (player1_score == 36)
            {
                cout << player1_name << " won";
                break;
            }
        }
        cout << player2_name << " roll";
        cin >> c;
        temp = random();
        cout << player2_name << "s die rolled to: " << temp << endl;
        if (temp != 1 and flag2 == 0)
        {
            cout << player2_name << " needs 1 to start the game" << endl
                 << endl;
        }
        else
        {
            flag2 = 1;
        }
        if (flag2 == 1)
        {
            player2_score += temp;
            check(&player2_score, player2_name);
            cout << "**" << player1_name << ": " << player1_score << "** **" << player2_name << ": " << player2_score << "**" << endl
                 << endl;
            if (player2_score == 36)
            {
                cout << player2_name << " won";
                break;
            }
        }
    }
}
