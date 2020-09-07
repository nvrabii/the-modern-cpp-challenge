/**
 * 27. Splitting a string into tokens with a list of possible
 * delimiters
 * 
 * Write a function that, given a string and a list of possible
 * delimiter characters, splits the string into tokens separated by any
 * of the delimiters and returns them in an std::vector.
 */

#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>

std::vector<std::string> split(std::string str, std::string separators = " ")
{
    // approach: character by character, build the world in a buffer. If
    // separator is encountered - push_back(word) to the solution and
    // clear buffer

    std::vector<std::string> result;
    std::string buff = "";

    for (auto it = str.begin(); it != str.end(); it++)
    {
        if (std::find(separators.begin(), separators.end(), *it) != separators.end())
        {
            if (buff.size())
            {
                result.push_back(buff);
                buff = "";
            }
        }
        else
        {
            buff += *it;
        }
    }

    if (buff.size())
    {
        result.push_back(buff);
        buff = "";
    }

    return result;
}

int main()
{
    std::vector<std::string> test = split("split-this string, for the god's sake", " ',");

    for (auto el : test)
        std::cout << el << "\n";
}