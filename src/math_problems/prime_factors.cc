/**
 * 9. Prime factors of a number
 * Write a program that prints the prime factors of a number entered by the
 * user.
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "n: ";
    int n;
    cin >> n;
    int temp = 2;

    while (n > 1)
    {
        if (n % temp == 0)
        {
            cout << temp << "\n";
            while (n % temp == 0)
                n /= temp;
        }
        temp++;
    }
}