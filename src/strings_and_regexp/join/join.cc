/**
 * 26. Joining strings together separated by a delimiter
 * 
 * Write a function that, given a list of strings and a delimiter,
 * creates a new string by concatenating all the input strings
 * separated with the specified delimiter. The delimiter must not
 * appear after the last string, and when no input string is provided,
 * the function must return an empty string.
 */

#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>

std::string join(std::vector<std::string> container, std::string separator = " ")
{
    std::string result;

    for (auto it = container.begin(); it != container.end(); it++)
        result += *it + ((it != container.end() - 1) ? separator : "");

    return result;
}

std::string join(std::initializer_list<std::string> container, std::string separator = " ")
{
    std::string result;

    for (auto it = container.begin(); it != container.end(); it++)
        result += *it + ((it != container.end() - 1) ? separator : "");

    return result;
}

int main()
{
    std::cout << join({"join", "this", "string", "for", "the", "god's", "sake"}, " ");
}