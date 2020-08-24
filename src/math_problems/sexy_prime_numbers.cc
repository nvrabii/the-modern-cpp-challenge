/**
 * 5. Sexy prime pairs
 * Write a program that prints all the sexy prime pairs up to a limit entered
 * by the user.
 */

#include <iostream>

using namespace std;

bool isPrime(int n)
{
    int temp = n - 1;
    while (temp > 1)
    {
        if (n % temp == 0)
            break;
        temp--;
    }

    return temp == 1;
}

int main()
{
    cout << "limit: ";
    int limit;
    cin >> limit;

    for (int i = 2; i <= limit - 6; i++)
        if (isPrime(i) && isPrime(i + 6))
            cout << i << " - " << i + 6 << "\n";
}