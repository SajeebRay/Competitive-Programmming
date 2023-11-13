#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
    srand(time(NULL));
    int randomN = rand();
    int random = rand();
    int rando = rand();
    int ran = rand();
    int ra = rand();

        cout << "Random number is: "  << randomN<< endl;
        cout << "Random number is: " << fixed <<setprecision(8) << random<< endl;
        cout << "Random number is: " << fixed <<setprecision(8) << rando<< endl;
        cout << "Random number is: " << fixed <<setprecision(8) << ran<< endl;
        cout << "Random number is: " << fixed <<setprecision(8) << ra<< endl;

string string2 = R"(Geeks.\nFor.\nGeeks.\n)";
cout << string2 << endl;

    return 0;
}
