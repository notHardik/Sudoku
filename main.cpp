#include <iostream>
#include <ctime>
#include <cstdlib>
#include "sudokuHeader.h"


using namespace std;

int main(){

    cout << "Welcome to Sudoku!" << endl;
    
    mainMenu();
    int ** board = createBoard();
    printBoard(board);

    return 0;
}