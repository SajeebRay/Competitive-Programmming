#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str = "This is Saj. He is an enginiring student";
    cout << str  << endl;

    str.replace(8, 3, "Sajeeb");
    cout << "Spelling mistake" << endl << "Enter the correct spelling of enginiring: ";
    string spelling;
    getline(cin, spelling);
    str.replace(str.find("enginiring"), 10, spelling);

    cout << str  << endl;

    return 0;
}

/** //using vector
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> str;

    str.push_back("Sajeeb");
    str.push_back("kumar");
    str.push_back("Ray");

    for (int i = 0; i < str.size(); i++)
    {
        cout << str.at(i) << " ";
    }

    return 0;
}*/
/** //with 2D arra
#include<iostream>

using namespace std;

int main()
{
    char str[4][10] = {"Sajeeb", "Kumar", "Ray", ";  Age: 18" };

    for (int i = 0; i < 4; i++)
        cout << str[i] << " ";

    return 0;
}
*/
/** //with string data type
#include<iostream>

using namespace std;

int main()
{
    string str[4] = {"Sajeeb", "Kumar", "Ray", ";  Age: 18" };

    for (int i = 0; i < 4; i++)
        cout << str[i] << " ";

    return 0;
}
*/
/** //with array pointer
#include<iostream>

using namespace std;

int main()
{
    char *str[4] = {"Sajeeb", "Kumar", "Ray", ";  Age: 18" };

    for (int i = 0; i < 4; i++)
        cout << str[i] << " ";

    return 0;
}
*/
