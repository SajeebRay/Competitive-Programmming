#include<iostream>

using namespace std;

class books
{
    public:
        string title;
        string author;
        int page;
        display()
        {
            cout << "The book " << title << " is awesome and it was written by " << author << endl;
        }
        books(string Title, string Author, int Page)
        {
            title = Title;
            author = Author;
            page = Page;
        }
        bool isGood()
        {
            if (page >= 35)
                return true;
            return false;
        }
};
int main()
{
    books book1("Three Days of Love", "Sajeeb Kumar Ray", 31),
     book2("Moyurakkhi", "Humayan Ahmed", 35);


    book1.display();
    book2.display();
    cout << book2.isGood();
    /**book1.title = "Three days of love";
    book1.author = "Sajeeb Kumar Ray";
    book1.page = 35;

    book2.title = "Moyurakkhi";
    book2.author = "Humayan Ahmed";
    book2.page = 90;*/
}
