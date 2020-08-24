/**
 * 3. Least common multiple
 * Write a program that will, given two or more positive integers, calculate
 * and print the least common multiple of them all. 
 */

#include <iostream>
#include <cmath>

using namespace std;

// uses gcd algorithm
int lcm(int a, int b)
{
    int t;
    int a1 = a;
    int b1 = b;

    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }

    return a != 0 ? abs(a1 * b1) / a : 0;
}

int main()
{
    int x;
    cout << "x: ";
    cin >> x;
    int y;
    cout << "y: ";
    cin >> y;

    cout << "LCM: " << lcm(x, y) << "\n";
}