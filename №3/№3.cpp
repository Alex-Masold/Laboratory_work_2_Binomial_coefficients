#include <iostream>
using namespace std;
int main()
{
	unsigned long long int array[67][67], k;

	cin >> k;

	for (int n = 0; n < 67; ++n)
	{
		array[0][n] = 1;
		array[n][0] = 1;
	}

	for (int n = 1; n < k; ++n)
	{
		for (int c = 1; c < k; ++c)
		{
			array[n][c] = array[n - 1][c] + array[n][c - 1];
		}
	}
	for (int n = 0; n <= k; n++)
	{
		for (int c = 0; c <= n; c++)
		{
			cout << array[c][n - c] << " ";
		}
		cout << endl;
	}
}