/**
 * 8. Armstrong numbers
 * Write a program that prints all Armstrong numbers with three digits.
 */

#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int n)
{
    int sum = 0;
    int t = n;
    while (t > 0)
    {
        int d = t % 10;
        sum += pow(d, 3);
        t /= 10;
    }
    return sum == n;
}

int main()
{
    for (int i = 100; i < 1000; i++)
        if (isArmstrong(i))
            cout << i << endl;
}