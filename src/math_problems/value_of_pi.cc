/**
 * 13. Computing the value of Pi
 * Write a program that computes the value of Pi with a precision of two decimal digits.
 */

#include <iostream>
#include <cmath>

using namespace std;

static const double E = 1e-2;
static const unsigned int MEANINGFUl_DIGITS = 2;

double gaussLegendre(double e)
{
    double a0 = 1.0;
    double b0 = 1.0 / sqrt(2);
    double t0 = 1.0 / 4;
    double p0 = 1.0;

    double a = a0, b = b0, t = t0, p = p0;

    do
    {
        a0 = a;
        b0 = b;
        t0 = t;
        p0 = p;

        a = (a0 + b0) / 2;
        b = sqrt(a0 * b0);
        t = t0 - p0 * pow(a0 - a, 2);
        p = 2 * p0;
    } while (abs(a - a0) >= E && abs(b - b0) >= E);

    return pow(a + b, 2) / (4 * t);
}

int main()
{
    cout.precision(MEANINGFUl_DIGITS + 1);
    cout << "PI = " << gaussLegendre(E) << "\n";
}
