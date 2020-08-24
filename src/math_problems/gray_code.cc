/**
 * 10. Gray code
 * Write a program that displays the normal binary representations, Gray code
 * representations, and decoded Gray code values for all 5-bit numbers.
 */

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    cout << "decimal\tbinary\tgray code\n";

    for (int i = 0; i <= 0b11111; i++)
        cout << i << "\t" << bitset<5>(i) << "\t" << bitset<5>(i ^ (i >> 1)) << "\n";
}