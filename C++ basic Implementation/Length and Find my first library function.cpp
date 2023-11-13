#include<iostream>

using namespace std;

int main()
{
	string name = "Sajeeb Kumar Ray";
	cout << name << endl;
	cout << name.length() << endl;
	cout << name[1] << endl;
	cout << name.find("Kumar", 0) << endl;
	cout << name.substr(7, 5) << endl;
	
	return 0;
}
