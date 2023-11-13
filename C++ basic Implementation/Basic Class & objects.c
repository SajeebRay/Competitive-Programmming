#include<iostream>

using namespace std;

class books
{
    public:
        string title;
        string author;
        int page;
};
int main()
{
    books book1, book2;

    book1.title = "Three days of love";
    book1.author = "Sajeeb Kumar Ray";
    book1.page = 35;

    book2.title = "Moyurakkhi";
    book2.author = "Humayan Ahmed";
    book2.page = 90;

    cout << "The book " << book1.title << " is awesome and it was written by " << book1.author << endl;
    cout << "The book " << book2.title << " is awesome and it was written by " << book2.author << endl;

}
