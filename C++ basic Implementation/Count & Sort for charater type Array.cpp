//count, max, sort, length using character array
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    char ch[] = "asdfghj";
    int l = sizeof(ch) / sizeof(ch[0]);
    for (int i = 0; i < l; i++)
        cout << ch[i] << " ";
    cout << endl;
    //sort
    sort(ch, ch+6);
    for (int i = 0; i < l; i++)
        cout << ch[i] << " ";
    //max
    char *max;
    //m = max_element(ch, ch + 6); //here, m is the character pointer
    max = max_element(ch, ch + 6);
    cout << endl << *max << endl;
    //min
    char *min;
    min = min_element(ch, ch + 6);
    cout << *min << endl;
    //count
    int c = count(ch, ch + l, *max);
    cout << c << endl;
    if (binary_search(ch, ch+l, 's'))
        cout << "S is found" << endl;
    else
        cout << "S is not found" << endl;

    return 0;
}
