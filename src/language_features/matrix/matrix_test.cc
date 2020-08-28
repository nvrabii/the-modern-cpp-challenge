/*
 * 17. Creating a 2D array with basic operations
 * Write a class template that represents a two-dimensional array container
 * with methods for element access (at() and data()), capacity querying,
 * iterators, filling, and swapping. It should be possible to move objects of
 * this type.
 */

#include "Matrix.hpp"
#include <utility>

int main()
{
    const int ROWS = 3;
    const int COLS = 3;

    Matrix<int> first(ROWS, COLS);

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            first.at(i, j) = i + j;

    std::cout << first.toString() << '\n';

    Matrix<int> second(ROWS, COLS);

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            second.at(i, j) = i * j;

    std::cout << second.toString() << '\n';

    std::swap(first, second);
    std::cout << "SWAPPED\n";
    std::cout << first.toString() << '\n';
    std::cout << second.toString() << '\n';

    std::cout << "FILL CONSTRUCTOR\n";
    Matrix<double> third(4, 4, 42.0);
    std::cout << third.toString() << '\n';
}