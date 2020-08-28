/**
 * 20. Container any, all, none
 * Write a set of general-purpose functions that enable checking whether any,
 * all, or none of the specified arguments are present in a given container.
 */

#include <iostream>
#include <vector>
#include <array>
#include <list>

#define generic_container_op(A, B, Bs) template <typename A, typename B = std::decay_t<decltype(*begin(std::declval<A>()))>, typename... Bs>

generic_container_op(C, T, Ts) bool contains_all(C c, T value, Ts... argv)
{
    std::vector<T> values{value, argv...};
    for (auto el : values)
        if (std::find(c.begin(), c.end(), el) == c.end())
            return false;

    return true;
}

generic_container_op(C, T, Ts) bool contains_any(C c, T value, Ts... argv)
{
    std::vector<T> values{value, argv...};
    for (auto el : values)
        if (std::find(c.begin(), c.end(), el) != c.end())
            return true;

    return false;
}

generic_container_op(C, T, Ts) bool contains_none(C c, T value, Ts... argv)
{
    return !contains_any(c, value, argv...);
}

int main()
{
    std::cout << "Hey there!\n";

    std::vector<int> x{1, 2, 3, 4, 5, 6};
    std::array<int, 6> y{1, 2, 3, 4, 5, 6};
    std::list<int> z{1, 2, 3, 4, 5, 6};
    std::cout << contains_all(x, 1, 2, 3) << '\n';
    std::cout << contains_none(y, 11, 22, 33) << '\n';
    std::cout << contains_any(z, 100, 22, 3) << '\n';

    std::cout << contains_all(x, 1, 22, 3) << '\n';
    std::cout << contains_none(y, 1, 2, 3) << '\n';
    std::cout << contains_any(z, 11, 22, 33) << '\n';
}