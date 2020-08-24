/**
 * 2. Greatest common divisor
 * Write a program that, given two positive integers, will calculate and print 
 * the greatest common divisor of the two.
 */

#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int t;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main()
{
    int x;
    cout << "x: ";
    cin >> x;
    int y;
    cout << "y: ";
    cin >> y;

    cout << "GCD: " << gcd(x, y) << "\n";
}