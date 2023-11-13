#include<iostream>
using namespace std;

void basicCal();
int main()
{
    basicCal();
}
void basicCal()
{
    int n1, n2, result, choice = 1;
    char op;
    while (choice)
    {
        cin >> n1 >> op >> n2;
        if (op == '+')
            result = n1 + n2;
        else if (op == '-')
            result = n1 - n2;
        else if (op == '*')
            result = n1 * n2;
        else if (op == '/')
            result = n1 / n2;
        else
            cout << "Invalid" << endl;
        cout << "The result is " << result << endl;
        cout << "Do you want to continue: ";
        cin >> choice;
    }
}
