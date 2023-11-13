#include<iostream>

using namespace std;

void file_i_o()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef sajeeb
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif // sajeeb
}
int binomialC(int n, int k);
int binomialC1(int n, int k);
int main()
{
    file_i_o();
    int n, k;
    cin >> n >> k;

    cout << "nCk is: " << binomialC(n , k) << endl;
    cout << "nCk is: " << binomialC1(n , k) << endl;

    return 0;
}
int binomialC(int n, int k)
{
	// Base Cases
	if (k > n)
		return 0;
	if (k == 0 || k == n)
		return 1;

	// Recur
	return binomialC(n - 1, k - 1)
		+ binomialC(n - 1, k);
}
int binomialC1(int n, int k)
{
    int result = 1, j;
    if (n < k)
        return 0;
    else{
        /*if (k > n-k)
            k = n-k;
        for (int i = 0; i < k; i++){
             result *= n-i;
             result /= i+1;
        }*/
        if (k < n-k)
            k = n-k;
        for (int i = n, j = 1; i > k; i--, j++){
            result *= i;
            result /= j;
        }

    }
    return result;
}
