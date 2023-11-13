#include<iostream>
using namespace std;

int table[1000][5000]; //tabulation table
int selection[1000]; // array where we store the value

void selected(int profit[], int weight[], int m, int n)
{
    int maxi = table[m][n]; // get maximum the last element
    int temp = 0;
    for (int i = 0; i < m; i++)
        selection[i] = 0; //consider there is no selected element
    for (int i = m; i > 0; i--){ //begin with last row
        for (int j = n; j > 0; j--){ //begin with last column
            if ((table[i][j] == maxi) && (maxi != table[i][j-1])) //if, left side e same value
            {
                if (maxi != table[i-1][j]) //if, up e same value
                {
                    temp = 1; //is not, then this is taken
                    maxi = table[i][j]-profit[i-1]; // now change the maximum, i.e. value-profit
                    break;
                }
                else
                {
                    i--; //is then, goto the previous row
                    j++; // and column remain same
                }
            }
        }
        if(temp == 1){ //is condition is satisfied
            selection[i-1] = 1;
            temp = 0;
        }
    }
}
int maxProfit(int profit[], int weight[], int value, int maxW)
{
    for (int i = 0; i <= value; i++){ //row indicates value
        for (int j = 0; j <= maxW; j++){ // column indicates maximum capacity
            if (i == 0 || j == 0) // phi(first row and column) is zero
                table[i][j] = 0;
            else if (j >= weight[i-1]) // if this false then the column is negative, but its not fare
                table[i][j] = max(table[i-1][j], (table[i-1][j-weight[i-1]] + profit[i-1]));
            else // just copy the upper value
                table[i][j] = table[i-1][j];
        }
    }
    selected(profit, weight, value, maxW);
    return table[value][maxW];
}
int main()
{
    int n = 4, tw = 8;
    int p[] = {4,3,6,5};
    int w[] = {3,2,5,4};
    int x = maxProfit(p, w, n, tw);

    cout << "Maximum Profit: " << x << endl;
    cout << "Selected weights are: ";
    for (int i = 0 ; i < n; i++) cout << selection[i] << " "; //output array
    cout << endl;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= tw; j++)
            cout << table[i][j] << " ";
        cout << endl;
    }

    return 0;
}
