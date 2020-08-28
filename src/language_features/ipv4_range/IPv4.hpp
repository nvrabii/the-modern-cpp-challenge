#ifndef IPV4_H
#define IPV4_H

#include <iostream>
#include <regex>
#include <vector>
#include <string>

static const std::string IPV4_READ_BAD_FORMAT =
    "ERROR in IPv4.read: IPv4 address consists of 4 numbers in the range [0, 255], separated by dot (.)";
static const std::string IPV4_PRINT_INCOMPLETE_ADDRESS =
    "ERROR in IPv4.print: incomplete IP address";

class IPv4
{
    std::vector<short> ip;

public:
    IPv4();
    IPv4(short, short, short, short);

    void read();
    void reset();
    void print();
    std::vector<short> getAddress();

    static std::vector<IPv4> range(IPv4, IPv4);

    bool operator>(IPv4);
    bool operator>=(IPv4);
    bool operator<(IPv4);
    bool operator<=(IPv4);
    bool operator==(IPv4);
    bool operator!=(IPv4);

    IPv4 operator++(int);
    IPv4 operator++();
};

#endif