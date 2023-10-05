#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>
#include <stdio.h>
//#include <iostream>
//using namespace std;

long long int factorial(int n)
{
    long long int i, x = 1;
    for (i = 1; i <= n; i++)
        x *= i;
    return x;
}
int main() {
    int i, n, c;
    long long int v;
    scanf("%d", &n);
    for (i = 0; i <= n; i++) {
        for (c = 0; c <= i; c++)
        {
            v = factorial(i) / (factorial(c) * factorial(i - c));
            printf("%ld ", v);
            //std :: cout >> v >> " ";
        }
        printf("\n");
    }

}