#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter a value for n: ";
    cin >> n;

    vector<int> v;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= n-i+1; j--) {
            v.push_back(j);
        }
    }

    cout << "Vector: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
