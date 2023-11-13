/* Problem A
#include<iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if ((a*b*3) % 2 != 0)
        cout << "Yes" << endl;
    else cout << "No" <<endl;

    return 0;
}
*/
/* Problem B
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b % a == 0)
        cout << a+b << endl;
    else
        cout << abs(a - b) << endl;

    return 0;
}
*/
/* Problem C
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    char c;
    cin >> c;
    if (c == 'A')
        cout << "T" << endl;
    else if (c == 'T')
        cout << "A" << endl;
    else if (c == 'C')
        cout << "G" << endl;
    else if (c == 'G')
        cout << "C" << endl;

    return 0;
}
*/
/* Problem D
#include<iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
        cout << a+b << endl;
    else if (a > b)
        cout << a + (a -1) << endl;
    else
        cout << b + b - 1 << endl;

    return 0;
}
*/
/* Problem E
#include<iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << ((a+b )% 24) << endl;

    return 0;
}
/*


/* Problem F
#include<iostream>

using namespace std;

int main()
{
    char c;
    cin >> c;


    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        cout << "vowel" << endl;
    else
        cout << "consonant" << endl;

    return 0;
}
*/
/* Problem G
#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 5 && b == 5 && c == 7)
        cout << "YES" << endl;
    else if (a == 5 && b == 7 && c == 5)
        cout << "YES" << endl;
    else if (a == 7 && b == 5 && c == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
*/
/* Problem H
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    int t, n;
    string p;
    cin>>t>>n;
    vector<string> v(t);

    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<t;i++){
        cout<<v[i];
    }
    cout<<endl;

    return 0;
}
*/



#include<stdio.h>

int main()
{
   int a,b,c,d;

   scanf("%d %d",&a,&b);

    printf("%d\n",(a+b)%24);

     return 0;
}
