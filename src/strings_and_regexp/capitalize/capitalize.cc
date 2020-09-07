/**
 * 25. Capitalizing an article title
 * Write a function that transforms an input text into a capitalized
 * version, where every word starts with an uppercase letter and has
 * all the other letters in lowercase. For instance, the text "the c++
 * challenger" should be transformed to "The C++ Challenger".
 */

#include <iostream>
#include <string>

std::string capitalize(std::string str)
{
    std::string result;

    for (int i = 0; i < (int)str.size(); i++)
        result.push_back((i == 0 || str.at(i - 1) == ' ') ? std::toupper(str.at(i)) : str.at(i));

    return result;
}

int main()
{
    std::cout << capitalize("hello there, guys");
}