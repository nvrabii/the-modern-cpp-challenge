/**
 * 15. IPv4 data type
 * Write a class that represents an IPv4 address. Implement the functions
 * required to be able to read and write such addresses from or to the
 * console. The user should be able to input values in dotted form, such as
 * 127.0.0.1 or 168.192.0.100. This is also the form in which IPv4 addresses
 * should be formatted to an output stream.
 */

#include "IPv4.hpp"

using namespace std;

int main()
{
    IPv4 address = IPv4();

    address.read();
    address.print();

    IPv4 addressTwo = IPv4(1, 100, 0, 0);
    addressTwo.print();
}