#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
#include<map>
#include<iterator>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    int t, n;
    long long int ar1[10004], ar2[10004];
    cin >> t;
    while (t--){
        cin >> n;
        int cnt = 0;
        for (int i = 0; i < n; i++)
            cin >> ar1[i];
        for (int i = 0; i < n; i++)
            cin >> ar2[i];
        if (ar1[0] <= ar2[0]) cnt++;
        for (int i = 1; i < n; i++){
            if (ar1[i] - ar1[i-1] <= ar2[i])
                cnt++;
        }
        cout << cnt << endl;
    }
}


/* D
int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int i = 0;
        int x = 0;
        while(1){
            x += pow(3, i);
            if (x >= n) break;
            i++;
        }
        cout << x << endl;
    }
    return 0;
}

*/
/* C
int main()
{
    int n;
    cin >> n;
    cout << "I hate ";
    for (int i = 1; i < n; i++){
        cout << "that ";
        if (i % 2 == 0)
            cout << "I hate ";
        else
            cout << "I love ";
    }
    cout << "it";
}

*/



/*

int main()
{
    int A, B, N;
    cin >> A >> B >> N;
    vector<int> vec1, vec2;

    vector<int>::iterator it1, it2;

    for (int i = 1; i <= A; i++){
        if (A % i == 0) vec1.push_back(i);
    }
    for (int i = 1; i <= B; i++){
        if (B % i == 0) vec2.push_back(i);
    }
    vector<int> vec(vec1.size() + vec2.size());
    it1 = set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vec.begin());

    for (it2 = vec.begin(); it2 < vec.end(); ++it2)
        cout << *it2 << endl;
    it2 = vec.begin();
    /*if (vec.size() < N){
        it2 = vec.end();
        cout << (*it2 - 1) << endl;
    }
    cout << *it2 + N - 1 << endl;
    return 0;
}
*/
/* A
int main()
{
    string s;
    cin >> s;
    int flag = 0;
    if (s[5] != '0' || s[6] > '4')
        flag = 1;

        if (s[6] == '1' && s[8] >= '3' && s[9] > '1')
            flag = 1;
        else if (s[6] == '2' && s[8] >= '2' && s[9] > '8')
            flag = 1;
        else if (s[6] == '3' && s[8] >= '3' && s[9] > '1')
            flag = 1;
        else if (s[6] == '4' && s[8] >= '3' && s[9] > '0')
            flag = 1;
        else if (s[8] > '3')
            flag = 1;

    if (flag)
        cout << "TBD" << endl;
    else
        cout << "Heisei" << endl;
    return 0;
}
*/
