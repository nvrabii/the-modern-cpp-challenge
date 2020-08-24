/**
 * 7. Amicable numbers
 * Write a program that prints the list of all pairs of amicable numbers
 * smaller than 1,000,000.
 */

#include <iostream>
#include <cmath>

using namespace std;

static const int LIMIT = 1000000;

int sumOfDivisors(int n)
{
    int sum = 1;
    int i = 2;
    for (; i < sqrt(n); i++)
        if (n % i == 0)
            sum += i + n / i;

    if (i * i == n)
        sum += i;

    return sum;
}

int main()
{
    for (int i = 0; i < LIMIT; i++)
    {
        int j = sumOfDivisors(i);
        if (i < j && sumOfDivisors(j) == i && j < LIMIT)
            cout << i << " - " << j << "\n";
    }
}