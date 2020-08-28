#include "IPv4.hpp"

IPv4::IPv4() : ip({}) {}

IPv4::IPv4(short int a, short int b, short int c, short int d) : ip({a, b, c, d}) {}

void IPv4::read()
{
    std::cout << "IPv4: ";
    std::string input;
    std::cin >> input;

    const std::regex pattern("^(\\d{1,3})\\.(\\d{1,3})\\.(\\d{1,3})\\.(\\d{1,3})$");
    std::smatch patternMatches;

    std::vector<short> temp = std::vector<short int>();

    try
    {
        if (!regex_search(input, patternMatches, pattern))
            throw IPV4_READ_BAD_FORMAT;

        for (int i = 1; i < 5; i++)
        {
            int subAddress = stoi(patternMatches[i]);
            if (subAddress < 0 || subAddress > 255)
                throw IPV4_READ_BAD_FORMAT;

            temp.push_back((short int)subAddress);
        }

        ip = move(temp);
    }
    catch (std::string e)
    {
        std::cout << e << "\n";
    }
    catch (std::exception e)
    {
        std::cout << e.what() << "\n";
    }
}

void IPv4::reset()
{
    ip = std::vector<short int>();
    for (int i = 0; i < 4; i++)
        ip.push_back(0);
}

void IPv4::print()
{
    try
    {
        if (ip.size() == 4)
            printf("%d.%d.%d.%d\n", ip.at(0), ip.at(1), ip.at(2), ip.at(3));
        else
            throw IPV4_PRINT_INCOMPLETE_ADDRESS;
    }
    catch (std::string e)
    {
        std::cout << e << "\n";
    }
    catch (std::exception e)
    {
        std::cout << e.what() << "\n";
    }
}
