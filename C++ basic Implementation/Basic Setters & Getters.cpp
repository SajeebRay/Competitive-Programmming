#include<iostream>
#include<iomanip>

using namespace std;

class address
{
private:
    string thana;
public:
    string district;
    int homeNo;

    address(string aDistrict, int aHomeNo, string aThana)
    {
        district = aDistrict;
        homeNo = aHomeNo;
        thana = aThana;
    }
    void setThana(string str)
        {
            thana = str;
        }
    string getThana()
        {
            return thana;
        }
};
int main()
{
    address sajeeb("Nilphamri", 22, "dhaka"), jawad("Dhaka", 48, "Adda");
    sajeeb.setThana("Jaldhaka");
    jawad.setThana("Badda");
    cout << sajeeb.getThana() << endl << jawad.getThana();

    return 0;
}
