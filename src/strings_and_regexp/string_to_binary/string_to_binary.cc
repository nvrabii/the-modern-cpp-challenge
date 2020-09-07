/**
 * 24. String to binary conversion
 * 
 * Write a function that, given a string containing hexadecimal digits
 * as the input argument, returns a vector of 8-bit integers that
 * represent the numerical deserialization of the string content.
 */

#include <vector>
#include <string>
#include <iostream>
#include <iomanip>

std::vector<int> string_to_binary(std::string str)
{
    std::vector<int> result;
    std::string current_number;

    for (int i = 0; i < (int)str.size(); i += 2)
    {
        std::copy(str.begin() + i, str.begin() + i + 2, current_number.begin());
        result.push_back(std::stoi(current_number, 0, 16));
    }

    return result;
}

int main()
{
    std::string test = "BAADF00D";
    for (auto &el : string_to_binary(test))
        std::cout << "0x" << std::setfill('0') << std::hex << el << ' ';
    std::cout << '\n';

    std::string test_2 = "010203040506";
    for (auto &el : string_to_binary(test_2))
        std::cout << el << ' ';
    std::cout << '\n';
}