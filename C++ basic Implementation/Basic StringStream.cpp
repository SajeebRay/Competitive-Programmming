#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    string str = "Sajeeb";
    int age = 19;
    stringstream ss;

    ss << "My name: ";
    ss << str;
    ss << "; age: ";
    ss << age;

    string info = ss.str();

    cout << info << endl;

    return 0;
}
/** //number into stringstream
#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    int input;
    cin >> input;
    stringstream ss;
    ss << input;
    string str;
    ss >> str;
    cout << str << endl;

    stringstream sso;
    sso << str;
    int next;
    sso >> next;
    next += 2;
    cout << next << endl;

    return 0;
}
*/
/** //Extremly basic
#include<iostream>
#include<bits/stdc++.h>
 using namespace std;

 int testSS(string str)
 {
     stringstream ss(str);
     string word;
     int count = 0;

     while (ss >> word)
        count++;
     return count;
 }
 int main()
 {
     string str;
     getline(cin, str);
    int result = testSS(str);
    cout << "This is the result: " << result;

    return 0;
 }
*/
