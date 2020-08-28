/**
 * 19. Adding a range of values to a container
 * Write a general-purpose function that can add any number of elements to the
 * end of a container that has a method push_back(T&& value).
 */
#include <iostream>
#include <type_traits>
#include <vector>

// SFINAE - Substitution Failure Is Not An Error
template <class C, typename T = std::decay_t<decltype(*push_back(std::declval<C>()))>, typename... Ts>
void add(C &c, T &&value, Ts &&... values)
{
    c.push_back(value);
    for (auto &&el : std::vector<T>({values...}))
        c.push_back(el);
}

int main()
{
    std::vector<int> my_vec({1, 2, 3});
    for (auto el : my_vec)
        std::cout << el << " ";
    std::cout << "\n";

    add(my_vec, 4, 5, 6);
    for (auto el : my_vec)
        std::cout << el << " ";
    std::cout << "\n";
}