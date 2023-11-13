
#include<stdio.h>
#include<conio.h>

char gameBoard[3][3];

void conditions();
void drowBoard();
void turnSajeeb(int* pCell);
void turnJawad(int* pCell);
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
    conditions();
    drowBoard();

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
            sleep(10);
            break;  //heres the end
        }
        else if (availableCell == 0)
        {
            sleep(10);
            printf("\nGame drow\n");
            break;
        }

        /****** for playboy jawad *****/
        turnJawad(&availableCell);
        getRowCol(availableCell, &X, &Y);
        gameBoard[X][Y] = 'X';
        availableCell -= 1;
        drowBoard();

        if (cheakResult('X') == 1)
        {
            sleep(10);
            break;
        }
        else if (availableCell == 0)
        {
            sleep(10);
            printf("\nGame drow\n");
            break;
        }

    }
    return 0;
}
void conditions()
{
    printf("\\*****************************************/\n");
    printf("\t******TIC TAC TOE******");
    printf("\n >>>Two players are play this game\n");
    printf("   Please select possion with digit 1 or 2 or 3 or 4 or 5 or 6 or 7 or 8 or 9");
    printf("\n Hits: Player 1, fill your your selected positon with 'O'");
    printf("\n Hits: Player 2, fill your your selected positon with 'X'");
    printf("\n If another query please call us. Mobile: 01785-307680");
    printf("\n\t*******Let's play********\n");
    printf("\\*****************************************/\n");

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
        printf("\nPlayer 1 turn\n\tEnter position: ");
        scanf("%d", &cell);
    }
    while (0 == validateInput(cell));

    *pCell = cell;
}
void turnJawad(int* pCell)
{
    int cell;

    do
    {
        printf("\nPayer 2 turn\n\tEnter position: ");
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
        if (ch == 'O')
            printf("\n Player 1 is winner\n");
        else
            printf("\n Player 2 is winner\n");
        status = 1;
    }
    if (gameBoard[2][0] == ch &&
        gameBoard[1][1] == ch &&
        gameBoard[0][2] == ch) //diagonal
    {
        if (ch == 'O')
            printf("\n Player 1 is winner\n");
        else
            printf("\n Player 2 is winner\n");
        status = 1;
    }
    if (gameBoard[0][0] == ch &&
        gameBoard[0][1] == ch &&
        gameBoard[0][2] == ch) // first row
    {
        if (ch == 'O')
            printf("\n Player 1 is winner\n");
        else
            printf("\n Player 2 is winner\n");
        status = 1;
    }
    if (gameBoard[1][0] == ch &&
        gameBoard[1][1] == ch &&
        gameBoard[1][2] == ch) // second row
    {
        if (ch == 'O')
            printf("\n Player 1 is winner\n");
        else
            printf("\n Player 2 is winner\n");
        status = 1;
    }
    if (gameBoard[2][0] == ch &&
        gameBoard[2][1] == ch &&
        gameBoard[2][2] == ch) // third row
    {
        if (ch == 'O')
            printf("\n Player 1 is winner\n");
        else
            printf("\n Player 2 is winner\n");
        status = 1;
    }
    if (gameBoard[0][0] == ch &&
        gameBoard[1][0] == ch &&
        gameBoard[2][0] == ch) //first column
    {
        if (ch == 'O')
            printf("\n Player 1 is winner\n");
        else
            printf("\n Player 2 is winner\n");
        status = 1;
    }
    if (gameBoard[0][1] == ch &&
        gameBoard[1][1] == ch &&
        gameBoard[2][1] == ch) // second coulmn
    {
        if (ch == 'O')
            printf("\n Player 1 is winner\n");
        else
            printf("\n Player 2 is winner\n");
        status = 1;
    }
    if (gameBoard[0][2] == ch &&
        gameBoard[1][2] == ch &&
        gameBoard[2][2] == ch) //third column
    {
        if (ch == 'O')
            printf("\n Player 1 is winner\n");
        else
            printf("\n Player 2 is winner\n");
        status = 1;
    }

    return status;
}
