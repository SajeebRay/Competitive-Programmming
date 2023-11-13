#include<stdio.h>

char gameBoard[3][3];

void drowBoard();
void turnSajeeb(int* pCell);
void turnNaima(int* pCell);
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

    while (availableCell >= 0) //loop until every cell cheak
    {
        /*****for player sajeeb ******/
        turnSajeeb(&selectedCell); //for input one cell
        getRowCol(selectedCell, &X, &Y); //get row and column form selected cell
        gameBoard[X][Y] = 'S'; //pasting S in selected box
        availableCell -= 1; //decresing a free box
        drowBoard(); // another printing

        if (cheakResult('S') == 1)
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
        gameBoard[X][Y] = 'N';
        availableCell -= 1;
        drowBoard();

        if (cheakResult('N') == 1)
        {
            break;
        }
        else if (availableCell == 0)
        {
            printf("\nGame drown");
            break;
        }

    }
    return 0;
}
void drowBoard()
{
    printf("\n\tTIC TAC TOE\n");
    printf("Digit (1-9)\nMention the valid cell number\n\n");

    printf("    %c | %c  | %c\n", gameBoard[0][0], gameBoard[0][1], gameBoard[0][2]);
    printf("  ----|----|----\n");

    printf("    %c | %c  | %c\n", gameBoard[1][0], gameBoard[1][1], gameBoard[1][2]);
    printf("  ----|----|----\n");

    printf("    %c | %c  | %c\n", gameBoard[2][0], gameBoard[2][1], gameBoard[2][2]);

}
void turnSajeeb(int* pCell)
{
    int cell;

    do
    {
        printf("\nSajeeb's turn\n\tEnter position: ");
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
        printf("\nNaima's turn\n\tEnter position: ");
        scanf("%d", &cell);
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
    if ('S' == gameBoard[row][col] ||
        'N' == gameBoard[row][col])
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
