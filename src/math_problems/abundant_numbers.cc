/**
 * 6. Abundant numbers
 * Write a program that prints all abundant numbers and their abundance, up to
 * a number entered by the user.
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "limit: ";
    int limit;
    cin >> limit;

    for (int i = 0; i < limit; i++)
    {
        int abundance = -i;
        for (int j = 1; j < i; j++)
            if (i % j == 0)
                abundance += j;

        if (abundance > 0)
            cout << i << " [ " << abundance << " ]\n";
    }
}