#include <iostream>
using namespace std;

double binom_coef(int n, int k);

int main()
{
	int q, n, k;
	int** a;
	cin >> q;

	for (int i = 0; i < q; i++)
	{
		cin >> n >> k;
		printf("%0.10g\n", binom_coef(n, k));
	}
}

double binom_coef(int n, int k)
{
	if (k > n / 2)
		k = n - k;
	if (k == 1)
		return n;
	if (k == 0)
		return 1;
	double a = 1;
	for (int i = 1; i <= k; ++i)
	{
		a *= n - k + i;
		a /= i;
	}
	return ceil(a - 0.2);
}