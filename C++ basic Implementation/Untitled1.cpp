// A naive recursive C++ implementation
#include <bits/stdc++.h>
using namespace std;

// Returns value of Binomial Coefficient C(n, k)
int binomialCoeff(int n, int k)
{
	// Base Cases
	if (k == 0 || k == n)
    {
        cout << "Works ";
        return 1;
    }

	// Recur
  	cout << "n = " << n << " k = " << k << endl;
	return binomialCoeff(n - 1, k - 1) +
				binomialCoeff(n - 1, k);
    //cout << "n1 = " << n << " k1 = " << k << endl;
}

/* Driver code*/
int main()
{
	int n = 5, k = 2;
	cout << "Value of C("<<n<<", "<<k<<") is " <<
							binomialCoeff(n, k);
	return 0;
}

// This is code is contributed by rathbhupendra
