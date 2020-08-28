/**
 * 16. Enumerating IPv4 addresses in a range
 * Write a program that allows the user to input two IPv4 addresses
 * representing a range and list all the addresses in that range.
 * Extend the structure defined for the previous problem to implement
 * the requested functionality.
 */

#include "IPv4.hpp"

int main()
{
    IPv4 addressStart = IPv4();
    IPv4 addressEnd = IPv4();

    addressStart.read();
    addressEnd.read();

    std::vector<IPv4> range = IPv4::range(addressStart, addressEnd);

    for (IPv4 el : range)
        el.print();
}
