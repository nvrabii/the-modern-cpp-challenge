/**
 * 14. Validating ISBNs
 * Write a program that validates that 10-digit values entered by the user, as
 * a string, represent valid ISBN-10 numbers.
 */

#include <iostream>

using namespace std;

bool isbn_10_check(const string isbn)
{
    int control_sum = 0;
    for (int i = 0; i < 10; i++)
        control_sum += (10 - i) * (int)(isbn[i] - '0');
    return control_sum % 11 == 0;
}

// optional
bool isbn_13_check(const string isbn)
{
    int control_sum = 0;
    for (int i = 0; i < 13; i++)
        control_sum += (i % 2 ? 1 : 3) * (int)(isbn[i] - '0');
    return control_sum % 10 == 0;
}

int main()
{
    while (true)
    {
        cout << "ISBN-10: ";
        string isbn;
        cin >> isbn;

        if (isbn.length() != 10)
        {
            cout << ">>> ISBN must have 10 digits !!!" << endl;
            continue;
        }

        cout << isbn << (isbn_10_check(isbn) ? " is not " : " is ") << "a valid ISBN-10 number" << endl;
        break;
    }
}