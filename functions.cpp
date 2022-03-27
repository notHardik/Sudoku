#include <iostream>
#include "sudokuHeader.h"

using namespace std;

void mainMenu(){
    int choice;

    cout << "\n1) Start\n2) Quit" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        
        break;
    case 2:

        break;
    default:
        cout << "Try again" << endl;
        mainMenu();
        break;
    }
}

int ** createBoard(){
    int **board;
    board = new int* [9];

    for(int i = 0; i < 9; i++)
    {
        board[i] = new int[9];
    }
    return board;
}

void fillBoard(int ** board)
{
    
}

void printBoard(int ** board)
{
    for(int i=0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return;
}