/**
 * 32. Pascal's triangle
 * 
 * Write a function that prints up to 10 rows of Pascal's triangle to
 * the console.
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std::string_literals;

void print_pascals_triangle(const int n)
{
    if (n < 1)
        return;

    int m[n * (n + 1)];

    for (int i = 0; i < n; i++)
    {
        m[i * (n + 1)] = 0;
        m[i * (n + 1) + 1] = 1;
        for (int j = 2; j < n + 1; j++)
            m[i * (n + 1) + j] = 0;
    }

    std::cout << m[1] << '\n';

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            m[i * (n + 1) + j] = m[(i - 1) * (n + 1) + j - 1] + m[(i - 1) * (n + 1) + j];
            std::cout << m[i * (n + 1) + j] << ' ';
        }
        std::cout << '\n';
    }
}

void print_pascals_triangle_centered(const int n)
{
    if (n < 1)
        return;

    int m[n * (n + 1)];
    std::string buff[n];

    for (int i = 0; i < n; i++)
    {
        m[i * (n + 1)] = 0;
        m[i * (n + 1) + 1] = 1;
        for (int j = 2; j < n + 1; j++)
            m[i * (n + 1) + j] = 0;
    }

    buff[0] = std::to_string(m[1]);

    for (int i = 1; i < n; i++)
    {
        buff[i] = "";
        for (int j = 1; j <= i + 1; j++)
        {
            m[i * (n + 1) + j] = m[(i - 1) * (n + 1) + j - 1] + m[(i - 1) * (n + 1) + j];
            buff[i] += std::to_string(m[i * (n + 1) + j]) + (j != i + 1 ? " " : "");
        }
    }

    for (int i = 0; i < n; i++)
        std::cout << std::setw(ceil((buff[n - 1].length() - buff[i].length()) / 2.0)) << " " << buff[i] << '\n';
}

int main()
{
    print_pascals_triangle_centered(10);
}