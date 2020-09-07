/**
 * 23. Binary to string conversion
 * 
 * Write a function that, given a range of 8-bit integers (such as an
 * array or vector), returns a string that contains a hexadecimal
 * representation of the input data. The function should be able to
 * produce both uppercase and lowercase content. 
 */

#include <vector>
#include <string>
#include <iostream>

std::string binary_to_string(std::vector<int> bin, bool lower = true)
{
    std::string hex = lower ? "0123456789abcdef" : "0123456789ABCDEF";
    std::string result = "";

    for (auto &el : bin)
    {
        result += hex[(el % 256) / 16];
        result += hex[(el % 256) % 16];
    }

    return result;
}

int main()
{
    std::vector<int> test({0xBA, 0xAD, 0xF0, 0x0D});
    std::cout << binary_to_string(test) << '\n';

    std::vector<int> test_2({1, 2, 3, 4, 5, 6});
    std::cout << binary_to_string(test_2) << '\n';
}