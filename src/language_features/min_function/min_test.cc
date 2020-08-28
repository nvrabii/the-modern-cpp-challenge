/**
 * 18. Minimum function with any number of arguments
 * Write a function template that can take any number of arguments and returns
 * the minimum value of them all, using operator < for comparison. Write a
 * variant of this function template that can be parameterized with a binary
 * comparison function to use instead of operator <.
 */
#include <iostream>
#include <vector>
#include <cmath>

template <typename T, typename... Args>
T min(T arg, Args... args)
{
    T current_min = arg;
    std::vector<T> list{args...};
    for (auto el : list)
        current_min = el < current_min ? el : current_min;
    return current_min;
}

template <typename T, typename... Args>
T min(T f(T, T), T arg, Args... args)
{
    T current_min = arg;
    std::vector<T> list{args...};
    for (auto el : list)
        current_min = f(current_min, el);
    return current_min;
}

int main()
{
    std::cout << min(100, 50, 23, -2, 10, 15, -2, 10, 30) << '\n';
    std::cout << min<int>([](int x, int y) -> int { return x < y ? x : y; }, 31, 12, 10, 66, 4, 100) << '\n';
}