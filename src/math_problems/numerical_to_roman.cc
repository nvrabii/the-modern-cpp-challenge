/**
 * 11. Converting numerical values to Roman
 * Write a program that, given a number entered by the user, prints its Roman
 * numeral equivalent.
 */

#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
    cout << "numerus: ";
    int num;
    cin >> num;

    string sol = "";

    list<pair<string, int>> numerics{
        {"M", 1000}, {"CM", 900}, {"D", 500}, {"CD", 400}, {"C", 100}, {"XC", 90}, {"L", 50}, {"XL", 40}, {"X", 10}, {"IX", 9}, {"V", 5}, {"IV", 4}, {"I", 1}};

    for (auto el : numerics)
        while (num / el.second)
        {
            sol += el.first;
            num -= el.second;
        }

    cout << sol << "\n";
}