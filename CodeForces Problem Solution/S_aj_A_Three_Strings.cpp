#include<iostream>
#include<string>
int main()
{
	int n;
	cin >> n;
	while (n--)
    {
		string s1, s2, s3;
		cin >> s1;
		cin >> s2;
		cin >> s3;
		int len = strlen(s1);
		int flag = 0;
        for (int i = 0; i < len; i++)
        {
            if (s1[i] != s2[i])
            {
                if (s1[i] == s3[i])
                    s2[i] = s3[i];
                else if (s2[i] == s3[i])
                    s1[i] = s3[i];
                else
                {
                    flag = 1;
                    break;
                }
            }
            else if (s1[i] == s2[i] && s1[i] != s3[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "NO";
        else if (s1 == s2)
            cout << "YES";
    }

	return 0;
}
