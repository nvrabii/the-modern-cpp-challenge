/**
 * 1. Sum of naturals divisible by 3 and 5
 * Write a program that calculates and prints the sum of all the natural 
 * numbers divisible by either 3 or 5, up to a given limit entered by the
 * user. 
 */

#include <iostream>

using namespace std;

int main()
{
    long limit;
    cout << "Limit: ";
    cin >> limit;

    long long result = 0;
    for (long i = 3; i <= limit; i++)
        if (i % 3 == 0 || i % 5 == 0)
            result += i;

    cout << "Result: " << result << "\n";
}