#include<iostream>
#include<vector>

using namespace std;

void create(vector<int>&);
void display(const vector<int>&);
int main()
{
    vector<int> vec;
    create(vec);
    display(vec);

    return 0;
}
void display(const vector<int>& myVector)
{
    for (int i = 0; i < myVector.size(); i++)
        cout << myVector[i] << " ";
}
void create(vector<int>& myVector)
{
    int input = 1;

    while (input != -1)
    {
        cin >> input;
        myVector.push_back(input);
    }
}




/** //Extremly basic
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec;

    //vec.push_back(1);
    //vec.push_back(2);

    cout << "Enter the size: ";
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    cout << endl << "Vector: ";
    for (unsigned int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << " ";
    }

    vec.insert(vec.begin(), 0);
    vec.insert(vec.begin() + 3, 10);
    cout << endl << "Vector: ";
    for (unsigned int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << " ";
    }
    vec.erase(vec.begin() + 3);
    cout << endl << "Vector: ";
    for (unsigned int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << " ";
    }
    cout << endl;
    if (vec.empty())
        cout << "Vector is empty.";
    else
        cout << "Vector is not empty.";

    vec.clear();
    cout << endl;
    if (vec.empty())
        cout << "Vector is empty.";
    else
        cout << "Vector is not empty.";

    return 0;
}
*/

