/**
 * 22. Literals of various temperature scales
 * 
 * Write a small library that enables expressing temperatures in the
 * three most used scales, Celsius, Fahrenheit, and Kelvin, and
 * converting between them. The library must enable you to write
 * temperature literals in all these scales, such as 36.5_deg for
 * Celsius, 97.7_f for Fahrenheit, and 309.65_K for Kelvin; perform
 * operations with these values; and convert between them.
 */

#include <iostream>

#include "temp_literals.hpp"

int main()
{
    Temperature t1(36.5_deg);
    Temperature t2 = 0.0_deg + 309.65_K;
    Temperature t3(97.7_f);

    std::cout << t1.get_c() << '\t' << t2.get_c() << '\t' << t3.get_c() << "\n\n";

    std::cout << "C°\tF°\tK°\n";

    for (Temperature i = 36.0_deg; i < 42.0_deg; i += 0.1_deg)
    {
        std::cout << i.get_c() << '\t' << i.get_f();
        std::cout << '\t' << i.get_k() << '\n';
    }
}