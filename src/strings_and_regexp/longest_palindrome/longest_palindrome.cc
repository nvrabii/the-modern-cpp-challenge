/**
 * 28. Longest palindromic substring
 * 
 * Write a function that, given an input string, locates and returns
 * the longest sequence in the string that is a palindrome. If
 * multiple palindromes of the same length exist, the first one should
 * be returned.
 */

#include <string>
#include <iostream>

bool is_palindrome(std::string);
std::string palindrome_r(std::pair<int, int>, std::string);
std::string palindrome(std::string);

std::string palindrome(std::string str)
{
    std::string largest_palindrome("");

    for (int i = 0; i < (int)str.size(); i++)
    {
        std::string temp = palindrome_r({i, i + 1}, str);
        if (temp.size() > largest_palindrome.size())
            largest_palindrome = temp;
    }

    return largest_palindrome;
}

std::string palindrome_r(std::pair<int, int> substring, std::string str)
{
    std::string temp = str.substr(substring.first, substring.second - substring.first);

    if (is_palindrome(temp))
    {
        std::string result = "";
        if (substring.first > 0 && substring.second < (int)str.size())
            result = palindrome_r({substring.first - 1, substring.second + 1}, str);

        temp = result.size() > temp.size() ? result : temp;

        if (substring.first > 0)
            result = palindrome_r({substring.first - 1, substring.second}, str);

        temp = result.size() > temp.size() ? result : temp;

        if (substring.second < (int)str.size())
            result = palindrome_r({substring.first, substring.second + 1}, str);

        temp = result.size() > temp.size() ? result : temp;

        return temp;
    }

    return "";
}

bool is_palindrome(std::string str)
{
    for (int i = 0; i <= (int)str.size() / 2; i++)
    {
        if (str[i] != str[str.size() - i - 1])
            return false;
    }

    return true;
}

int main()
{
    std::string test_1 = "01232123210844466557775566444901232123210";
    std::cout << palindrome(test_1) << '\n';
}