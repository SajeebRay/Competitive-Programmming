#include<iostream>
#include<map>
#include<stack>
#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

map<char, int> mp;
void i_o_file();
void sieve();
void infixExpre(string);
int LexicalCheck(string);
int expressionCheck(string);
int main()
{
    i_o_file();
    sieve();
    char str[10000];
    while ((scanf("%s", str)) != EOF){
    /*string str;
    while (cin >> str){*/
        if (!LexicalCheck(str))
            cout << "Lexical Error!" << endl;
        else if (!expressionCheck(str))
            cout << "Syntax Error!" << endl;
        else
            infixExpre(str);
    }
    return 0;
}
void infixExpre(string str)
{
    stack<char> sc;
    int l = str.length();
    REP(i, l){
        if (isalnum(str[i]))
            cout << str[i];
        else if (str[i] == '+' || str[i] == '-' ||
                str[i] == '*' || str[i] == '/' || str[i] == '^' ||
                str[i] == '#' || str[i] == '=' || str[i] == '<' ||
                str[i] == '>' || str[i] == '.' || str[i] == '|'){
                    if (!(sc.empty())){
                        while(mp[str[i]] <= mp[sc.top()] ){
                            cout << sc.top();
                            sc.pop();
                            if (sc.empty())
                                break;
                        }
                    }
                    sc.push(str[i]);
                }
        else if (str[i] == '(')
                sc.push(str[i]);

        else if (str[i] == ')'){
            while (sc.top() != '('){
                 cout << sc.top();
                 sc.pop();
             }
             sc.pop();
        }

    }
    while (sc.empty() != 1){
        cout << sc.top();
        sc.pop();
    }
    cout << endl;
}
int expressionCheck(string str)
{
        int l = str.length();
        int identify[2] = {0, 0};
        int flag = 1;
        for (int i = 0; i < l; i++)
        {
            if (str[0] == ')' || str[0] == '*' || str[0] == '/' ||
                    str[l-1] == '+' || str[l-1] == '-' ||
                    str[l-1] == '*' || str[l-1] == '/' || str[l-1] == '(' )
            {
                return 0;
            }
            if ((str[i] == '+' || str[i] == '-' ||
                str[i] == '*' || str[i] == '/' || str[i] == '^' ||
                str[i] == '#' || str[i] == '=' || str[i] == '<' ||
                str[i] == '>' || str[i] == '.' || str[i] == '|' || str[i] == '%') &&
                     (str[i+1] == '+' || str[i+1] == '-' ||
                str[i+1] == '*' || str[i+1] == '/' || str[i+1] == '^' ||
                str[i+1] == '#' || str[i+1] == '=' || str[i+1] == '<' ||
                str[i+1] == '>' || str[i+1] == '.' || str[i+1] == '|' || str[i+1] == '%'))
                {
                    return 0;
                }

            if (identify[0] == identify[1])
            {
                if (str[i] == ')' )
                {
                    return 0;
                }
            }
            if (str[i] == '(' )
                identify[0]++;
            else if (str[i] == ')' )
                identify[1]++;
        }
        if ((identify[0] == identify[1]) && flag == 1)
            return 1; // correct
        else
            return 0;
}
int LexicalCheck(string str)
{
    int call = 5;
    int l = str.length();
    REP(i, l){
        if ((str[i] == '+' || str[i] == '-' ||
            str[i] == '*' || str[i] == '/' || str[i] == '^' ||
            str[i] == '#' || str[i] == '=' || str[i] == '<' ||
            str[i] == '>' || str[i] == '.' || str[i] == '|' ||
            str[i] == '(' || str[i] == ')') || isalnum(str[i]) )
                {

                }
        else{
            return 0;
        }
    }
    return call;
}
void sieve()
{
    mp['|'] = 1;
    mp['.'] = 2;
    mp['='] = 3;
    mp['#'] = 3;
    mp['<'] = 3;
    mp['>'] = 3;
    mp['+'] = 4;
    mp['-'] = 4;
    mp['*'] = 5;
    mp['/'] = 5;
    mp['^'] = 6;
}
void i_o_file()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    #ifndef in_out
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif // in_out
}
