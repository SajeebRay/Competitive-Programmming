 #include<iostream>
 #include<utility>
 #include<set>

 using namespace std;

 int main()
 {
     set <int> s;
     set <int> ::iterator it;
     pair <set <int>::iterator, bool> p;
     s.insert(3);
     s.insert(4);
     s.insert(1);
     s.insert(2);
     p = s.insert(5);
     if (p.second == 1)
        cout << "5 Inserted" << endl;
     else
        cout << "5 Can't insert" << endl;

     p = s.insert(3);
     if (p.second == 1)
        cout << "3 Inserted" << endl;
     else
        cout << "3 Can't insert" << endl;


     for (it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
     it = s.find(5);
     s.erase(it);
     //or s.erase(s.find(value));
     for (it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

     return 0;
 }
