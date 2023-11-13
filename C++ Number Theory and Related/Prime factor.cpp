#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<iterator>

using namespace std;

vector<long long> primeFactor(long long n);
void printVector(const vector<long long>&);
long long maxPrimeFactor(vector<long long>&);
int isPrime(long long n);

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long number;
    cout << "Input number ";
    cin >> number;
    vector<long long> vec;

    cout << "Factors are... ";
    vec = primeFactor(number);
    printVector(vec);

    //find the max prime factor
    cout << "Max prime factor is: ";
    cout << maxPrimeFactor(vec) << endl;

    return 0;
}
vector<long long> primeFactor(long long n)
{
    vector<long long> vec;
    while (n % 2 == 0)
    {
        vec.push_back(2);
        n = n / 2;
    }
    for (long long i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            vec.push_back(i);
            n = n / i;
        }
    }

    if (n > 2)
        vec.push_back(n);

    return vec;
}
void printVector(const vector<long long> &vec)
{
    for (long long i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << endl;
}
long long maxPrimeFactor(vector<long long> &vec)
{
    vector<long long>:: iterator it;
again:
    it = max_element(vec.begin(), vec.end());
    long long maximum = *it;
    if (isPrime)
        return maximum;
    else
    {
        vec.erase(it);
        goto again;
    }
}
int isPrime(long long n)
{
    if (n == 2)
        return 1;
    else if (n % 2 == 0)
        return 0;
    else
    {
        for(long i = 3; i < sqrt(n); i += 2)
            if (n % i == 0)
                return 0;
        return 1;
    }
}
