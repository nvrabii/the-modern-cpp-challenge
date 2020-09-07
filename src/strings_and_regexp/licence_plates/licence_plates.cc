/**
 * 29. License plate validation
 * 
 * Considering license plates with the format LLL-LL DDD or
 * LLL-LL DDDD (where L is an uppercase letter from A to Z and D is a
 * digit), write:
 * - One function that validates that a license plate number is of the
 *   correct format
 * - One function that, given an input text, extracts and returns all
 *   the license plate numbers found in the text
 */

#include <string>
#include <vector>
#include <regex>
#include <iostream>

bool validate_licence_plate(std::string plate_number)
{
    std::regex r(
        R"([A-Z]{3}-[A-Z]{2}\s\d{3,4})",
        std::regex::extended);
    std::smatch match;
    return std::regex_match(plate_number, match, r);
}

std::vector<std::string> extract_plate_numbers(std::string text)
{
    std::vector<std::string> result{};

    std::regex r(
        R"([A-Z]{3}-[A-Z]{2} [0-9]{3,4})",
        std::regex::extended);
    std::smatch match;

    while (std::regex_search(text, match, r))
    {
        result.push_back(match[0]);
        text = match.suffix();
    }

    return result;
}

int main()
{
    std::string plate_number;

    std::cout << "Plate number: ";
    std::cin >> plate_number;
    std::cout
        << (validate_licence_plate(plate_number)
                ? "Valid plate number!"
                : "Mister, check your plate number")
        << '\n';

    std::string text =
        "Bob has the car with plate number AXX-XX 123, and Mike's car has the plate -BCC-DD 4669";

    std::vector<std::string> plate_numbers = extract_plate_numbers(text);
    for (auto el : plate_numbers)
        std::cout << el << '\n';
}