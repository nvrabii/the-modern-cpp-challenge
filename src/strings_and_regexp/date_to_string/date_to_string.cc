/**
 * 31. Transforming dates in strings
 * 
 * Write a function that, given a text containing dates in the format
 * dd.mm.yyyy or dd-mm- yyyy, transforms the text so that it contains
 * dates in the format yyyy-mm-dd.
 */

#include <string>
#include <regex>
#include <iostream>
#include <iomanip>
#include <sstream>

#include <ctime>

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(std::string date)
    {
        std::regex r(
            R"(([0-9]{2})(-|.)([0-9]{2})(-|.)([0-9]{4}))",
            std::regex::extended);
        std::smatch match;

        if (std::regex_match(date, match, r))
        {
            day = std::stoi(match[1]);
            month = std::stoi(match[3]);
            year = std::stoi(match[5]);
        }
        else
        {
            time_t now = time(0);
            tm *time = localtime(&now);

            day = time->tm_mday;
            month = time->tm_mon + 1;
            year = time->tm_year + 1900;
        }
    }

    std::string to_string()
    {
        std::ostringstream str;
        str << std::setfill('0') << std::setw(4) << year << '.' << std::setw(2)
            << month << '.' << std::setw(2) << day;
        return str.str();
    }
};

void format_dates(std::string &origin)
{
    std::regex r(
        R"(([0-9]{2})(-|.)([0-9]{2})(-|.)([0-9]{4}))",
        std::regex::extended);
    std::smatch match;

    std::string text = origin;
    origin = "";
    while (std::regex_search(text, match, r))
    {
        origin += text.substr(0, match.position());
        origin += Date(match[0]).to_string();
        text = match.suffix().str();
    }
    origin += text;
}

int main()
{
    Date formater_1("09.11.1998");
    std::cout << formater_1.to_string() << '\n';

    Date formater_2("08-10-2000");
    std::cout << formater_2.to_string() << '\n';

    std::string test = "Mary tells her friends she is from 10.06.1999, but we"
                       "all know - she's from 10-06-1989. Poor old Mary.";
    std::cout << test << '\n';
    format_dates(test);
    std::cout << test << '\n';
}