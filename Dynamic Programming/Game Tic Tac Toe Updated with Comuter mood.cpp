#include<stdio.h>
#include<iostream>
#include<cstdlib>
using namespace std;

char gameBoard[3][3];

void drowBoard();
void turnSajeeb(int* pCell);
void turnNaima(int* pCell);
void turnCom(int* pCell);
int validateInput(int cell);
void getRowCol(int cell, int* pX, int* pY);
int cheakResult(char ch);

int main()
{
    int X = 0, Y = 0;
    int row = 0, col = 0;
    int selectedCell = 0, availableCell = 9;

    char startChar = '1';

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            gameBoard[i][j] = startChar++;

    /******** printf *******/
    drowBoard();
    reEnter:
    cout << endl << endl;
    cout << "\t\tOption:" << endl;
    cout << "\t\t\tPress 1: Play" << endl;
    cout << "\t\t\tPress 2: Play with friend" << endl;
    int choice;
    cin >> choice;
    switch(choice)
    {
        case 1:{
            while (availableCell >= 0) //loop until every cell cheak
            {
                /*****for player sajeeb ******/
                turnSajeeb(&selectedCell); //for input one cell
                getRowCol(selectedCell, &X, &Y); //get row and column form selected cell
                gameBoard[X][Y] = 'O'; //pasting S in selected box
                availableCell -= 1; //decresing a free box
                drowBoard(); // another printing

                if (cheakResult('O') == 1)
                {
                    break;  //heres the end
                }
                else if (availableCell == 0)
                {
                    printf("\nGame drown");
                    break;
                }

                /****** for Computer *****/
                turnCom(&availableCell);
                getRowCol(availableCell, &X, &Y);
                gameBoard[X][Y] = 'X';
                availableCell -= 1;
                drowBoard();

                if (cheakResult('X') == 1)
                {
                    break;
                }
                else if (availableCell == 0)
                {
                    printf("\nGame drown");
                    break;
                }

            }
            break;
        }
        case 2:{
            while (availableCell >= 0) //loop until every cell cheak
            {
                /*****for player sajeeb ******/
                turnSajeeb(&selectedCell); //for input one cell
                getRowCol(selectedCell, &X, &Y); //get row and column form selected cell
                gameBoard[X][Y] = 'O'; //pasting S in selected box
                availableCell -= 1; //decresing a free box
                drowBoard(); // another printing

                if (cheakResult('O') == 1)
                {
                    break;  //heres the end
                }
                else if (availableCell == 0)
                {
                    printf("\nGame drown");
                    break;
                }

                /****** for player Naima *****/
                turnNaima(&availableCell);
                getRowCol(availableCell, &X, &Y);
                gameBoard[X][Y] = 'X';
                availableCell -= 1;
                drowBoard();

                if (cheakResult('X') == 1)
                {
                    break;
                }
                else if (availableCell == 0)
                {
                    printf("\nGame drown");
                    break;
                }

            }
            break;
        }
        default: {
            cout << "Invalid" << endl;
            goto reEnter;
            break;
        }
    }
    return 0;
}
void drowBoard()
{

    cout << " " << "TIC TAC TOE" << " " << endl;
    cout << "Digit (1 - 9)" << " " << "Mention the valid number" << " " << endl;
    cout << "\t " << gameBoard[0][0] << " | " << gameBoard[0][1] << " | " << gameBoard[0][2] << endl;
    cout << "\t---" << "|" << "---" << "|" << "---" << endl;
    cout << "\t " << gameBoard[1][0] << " | " << gameBoard[1][1] << " | " << gameBoard[1][2] << endl;
    cout << "\t---" << "|" << "---" << "|" << "---" << endl;
    cout << "\t " << gameBoard[2][0] << " | " << gameBoard[2][1] << " | " << gameBoard[2][2] << endl;

}
void turnSajeeb(int* pCell)
{
    int cell;

    do
    {
        printf("\nYour's turn\n\tEnter position: ");
        scanf("%d", &cell);
    }
    while (0 == validateInput(cell));

    *pCell = cell;
}
void turnNaima(int* pCell)
{
    int cell;

    do
    {
        printf("\nFriend's turn\n\tEnter position: ");
        scanf("%d", &cell);
    }
    while (0 == validateInput(cell));

    *pCell = cell;
}
void turnCom(int* pCell)
{
    int cell;

    do
    {
        cout << "\nComputer's turn" << endl;
        cell = 1+ rand() % 9;
        cout << "\tEnter position: " << cell << endl;

    }
    while (0 == validateInput(cell));

    *pCell = cell;
}
int validateInput(int cell)
{
    int row, col;

    if (cell < 0 && 9 < cell) // condition cheak
        return 0;

    getRowCol(cell, &row, &col); //getting row and collumn acording to the cell number
    if ('O' == gameBoard[row][col] ||
        'X' == gameBoard[row][col])
    {
        return 0;
    }
    return 1;
}
void getRowCol(int cell, int* pX, int* pY)
{
    *pX = (cell - 1) / 3;
    *pY = (cell - 1) % 3;
}
int cheakResult(char ch)
{
    int status = 0;

    if (gameBoard[0][0] == ch &&
        gameBoard[1][1] == ch &&
        gameBoard[2][2] == ch) //diagonal
    {
        printf("\n %c is winner", ch);
        status = 1;
    }
    if (gameBoard[2][0] == ch &&
        gameBoard[1][1] == ch &&
        gameBoard[0][2] == ch) //diagonal
    {
        printf("\n %c is winner", ch);
        status = 1;
    }
    if (gameBoard[0][0] == ch &&
        gameBoard[0][1] == ch &&
        gameBoard[0][2] == ch) // first row
    {
        printf("\n %c is winner", ch);
        status = 1;
    }
    if (gameBoard[1][0] == ch &&
        gameBoard[1][1] == ch &&
        gameBoard[1][2] == ch) // second row
    {
        printf("\n %c is winner", ch);
        status = 1;
    }
    if (gameBoard[2][0] == ch &&
        gameBoard[2][1] == ch &&
        gameBoard[2][2] == ch) // third row
    {
        printf("\n %c is winner", ch);
        status = 1;
    }
    if (gameBoard[0][0] == ch &&
        gameBoard[1][0] == ch &&
        gameBoard[2][0] == ch) //first column
    {
        printf("\n %c is winner", ch);
        status = 1;
    }
    if (gameBoard[0][1] == ch &&
        gameBoard[1][1] == ch &&
        gameBoard[2][1] == ch) // second coulmn
    {
        printf("\n %c is winner", ch);
        status = 1;
    }
    if (gameBoard[0][2] == ch &&
        gameBoard[1][2] == ch &&
        gameBoard[2][2] == ch) //third column
    {
        printf("\n %c is winner", ch);
        status = 1;
    }

    return status;
}
