/**
 * 4. Largest prime smaller than given number
 * Write a program that computes and prints the largest prime number that is 
 * smaller than a number provided by the user, which must be a positive
 * integer.
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "Limit: ";
    unsigned int limit;
    cin >> limit;

    unsigned int temp = limit;
    while (temp > 1)
    {
        int p = temp;
        int iterator = p - 1;
        while (iterator > 1)
        {
            if (p % iterator == 0)
                break;
            iterator--;
        }
        if (iterator == 1)
        {
            cout << "The largest prime number smaller than " << limit << " is " << p << "\n";
            return 0;
        }
        temp--;
    }

    cout << "No prime numbers smaller than " << limit << "\n";
}