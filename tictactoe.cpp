#include <iostream>
using namespace std;
char a[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int i = 0;
int count=0;
bool checkwin()
{
    if (a[0] == 'X' && a[0] == a[3] && a[3] == a[6])
    {
        i = 1;
    }
    else if (a[1] == 'X' && a[1] == a[4] && a[4] == a[7])
    {
        i = 1;
    }
    else if (a[2] == 'X' && a[2] == a[5] && a[5] == a[8])
    {
        i = 1;
    }
    else if (a[0] == 'X' && a[0] == a[1] && a[1] == a[2])
    {
        i = 1;
    }
    else if (a[3] == 'X' && a[3] == a[4] && a[4] == a[5])
    {
        i = 1;
    }
    else if (a[6] == 'X' && a[6] == a[7] && a[7] == a[8])
    {
        i = 1;
    }
    else if (a[0] == 'X' && a[0] == a[4] && a[4] == a[8])
    {
        i = 1;
    }
    else if (a[2] == 'X' && a[2] == a[4] && a[4] == a[6])
    {
        i = 1;
    }
    else if (a[0] == 'O' && a[0] == a[3] && a[3] == a[6])
    {
        i = 1;
    }
    else if (a[1] == 'O' && a[1] == a[4] && a[4] == a[7])
    {
        i = 1;
    }
    else if (a[2] == 'O' && a[2] == a[5] && a[5] == a[8])
    {
        i = 1;
    }
    else if (a[0] == 'O' && a[0] == a[1] && a[1] == a[2])
    {
        i = 1;
    }
    else if (a[3] == 'O' && a[3] == a[4] && a[4] == a[5])
    {
        i = 1;
    }
    else if (a[6] =='O' && a[6] == a[7] && a[7] == a[8])
    {
        i = 1;
    }
    else if (a[0] == 'O' && a[0] == a[4] && a[4] == a[8])
    {
        i = 1;
    }
    else if (a[2] == 'O' && a[2] == a[4] && a[4] == a[6])
    {
        i = 1;
    }
    else
        i = 0;


       if (i == 1)
            {
                cout << "*********Player 1 is the WINNER********" << endl;
            }
         if (a[0]!='1'&&a[1]!='2'&&a[2]!='3'&&a[3]!='4'&&a[4]!='5'&&a[5]!='6'&&a[6]!='7'&&a[7]!='8'&&a[8]!='9')
            {
                cout << "***NO WINNER***" << endl;
            }
            
}

void moves();
void board()
{
    cout << "PLAYER 1=X & PLAYER 2=O" << endl;
    cout << a[0] << "  |  " << a[1] << "  |  " << a[2] << endl;
    cout << "---|-----|---" << endl;
    cout << a[3] << "  |  " << a[4] << "  |  " << a[5] << endl;
    cout << "---|-----|---" << endl;
    cout << a[6] << "  |  " << a[7] << "  |  " << a[8] << endl;
}

int main()
{
    board();
    cout << "Start ......... " << endl;
    cout << "Player 1\n CHOOSE A NUMBER " << endl;
    
    while (i == 0)
    {
        system("cls");
        board();
        moves();
        count++;
        
            // if (i == 1)
            // {
            //     cout << "Player 1 is the WINNER" << endl;
            // }
            // if (i == -1)
            // {
            //     cout << "Player 2 is the WINNER" << endl;
            // }
            // if (i==0){
                
            // }
        
    }
}
void moves()
{
    int player1, player2;
    cout << "PLAYER 1--> ";
    cin >> player1;
    system("cls");
    a[player1 - 1] = 'X';
    board();
    checkwin();
    cout << "PLAYER 2--> ";
    cin >> player2;
    system("cls");
    board();
    a[player2 - 1] = 'O';
    checkwin();
}