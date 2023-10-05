#include <iostream>
using namespace std;

long long** generate_pascal_triangle(int n, long long module)
{
	long long** massiv;
	massiv = (long long**)malloc((n + 1) * sizeof(long long*));
	for (int i = 0; i <= n; ++i)
	{
		massiv[i] = (long long*)malloc((i + 1) * sizeof(long long));
	}
	for (int i = 0; i <= n; ++i)
	{
		massiv[i][0] = 1 % module;
		massiv[i][i] = 1 % module;
	}
	for (int i = 2; i <= n; ++i)
	{
		for (int j = 1; j < i; ++j)
		{
			massiv[i][j] = (massiv[i - 1][j - 1] + massiv[i - 1][j]) % module;
		}
	}
	return massiv;
}

int main()
{
	int module = 0, size = 0, n = 0, k = 0;
	cin >> module >> size;

	long long** massiv = generate_pascal_triangle(2001, module);
	for (int i = 0; i < size; ++i)
	{
		cin >> n >> k;
		if (k < 0 || k > n)
		{
			cout << "0" << endl;
		}
		else
		{
			cout << massiv[n][k] << endl;
		}
	}
	for (int i = 0; i < 2001; ++i)
	{
		free(massiv[i]);
	}
	free(massiv);
}