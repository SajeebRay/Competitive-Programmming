
#include<iostream>

using namespace std;

class books
{
    public:
        string title;
        string author;
        int page;
        void special()
        {
            cout << "The book is personalized" << endl;
        }
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
};
class writters{  public: books


};
int main()
{
    books book1("Three Days of Love", "Sajeeb Kumar Ray", 31),
     book2("Moyurakkhi", "Humayan Ahmed", 35);
     book1.special();

    book1.display();
    book2.display();

    writters sajeeb;
    sajeeb.special();
}
