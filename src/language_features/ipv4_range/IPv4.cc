#include "IPv4.hpp"

IPv4::IPv4() : ip(std::vector<short>({0, 0, 0, 0})) {}

IPv4::IPv4(short a, short b, short c, short d) : ip({a, b, c, d}) {}

void IPv4::read()
{
    std::cout << "IPv4: ";
    std::string input;
    std::cin >> input;

    const std::regex pattern("^(\\d{1,3})\\.(\\d{1,3})\\.(\\d{1,3})\\.(\\d{1,3})$");
    std::smatch patternMatches;

    std::vector<short> temp = std::vector<short>();

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
    ip = std::vector<short>();
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

std::vector<short> IPv4::getAddress()
{
    return ip;
}

bool IPv4::operator>(IPv4 address)
{
    for (int i = 0; i < 4; i++)
        if (ip.at(i) > address.getAddress().at(i))
            return true;
        else if (ip.at(i) < address.getAddress().at(i))
            return false;

    return false;
}

bool IPv4::operator>=(IPv4 address)
{
    for (int i = 0; i < 4; i++)
        if (ip.at(i) > address.getAddress().at(i))
            return true;
        else if (ip.at(i) < address.getAddress().at(i))
            return false;

    return true;
};

bool IPv4::operator<(IPv4 address)
{
    return !(*this >= address);
};

bool IPv4::operator<=(IPv4 address)
{
    return !(*this > address);
};

bool IPv4::operator==(IPv4 address)
{
    for (int i = 0; i < 4; i++)
        if (ip.at(i) != address.getAddress().at(i))
            return false;
    return true;
};

bool IPv4::operator!=(IPv4 address)
{
    return !(*this == address);
};

IPv4 IPv4::operator++(int)
{
    IPv4 old = IPv4();
    old.ip = std::vector<short>(this->ip);

    for (int i = 3; i >= 0; i--)
    {
        ip.at(i) = (ip.at(i) + 1) % 256;
        if (ip.at(i) != 0)
            break;
    }
    return old;
}

IPv4 IPv4::operator++()
{
    for (int i = 3; i >= 0; i--)
    {
        ip.at(i) = (ip.at(i) + 1) % 256;
        if (ip.at(i) != 0)
            break;
    }

    return *this;
}

std::vector<IPv4> IPv4::range(IPv4 from, IPv4 to)
{
    std::vector<IPv4> range{};

    for (IPv4 it = from; it <= to; it++)
        range.push_back(it);

    return range;
}