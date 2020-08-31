#ifndef TEMP_LITERALS_H
#define TEMP_LITERALS_H

#include <string>

class Temperature
{
private:
    Temperature(long double c_temperature) : c(c_temperature) {}

    friend Temperature operator"" _deg(long double);
    friend Temperature operator"" _f(long double);
    friend Temperature operator"" _K(long double);

    long double c{0};

public:
    long double get_c() { return c; }
    long double get_f() { return c_to_f(c); }
    long double get_k() { return c_to_k(c); }

    static long double c_to_f(long double c) { return c * 9 / 5 + 32; }

    static long double f_to_c(long double f) { return (f - 32) * 5 / 9; }

    static long double c_to_k(long double c) { return c + 273.15; }

    static long double k_to_c(long double f) { return f - 273.15; }

    static long double f_to_k(long double c) { return c_to_f(f_to_k(c)); }

    static long double k_to_f(long double f) { return c_to_f(k_to_c(f)); }

    Temperature operator+(Temperature other)
    {
        return Temperature(get_c() + other.get_c());
    }

    Temperature operator-(Temperature other)
    {
        return Temperature(get_c() - other.get_c());
    }

    bool operator<(Temperature other)
    {
        return get_c() < other.get_c();
    }

    bool operator>(Temperature other)
    {
        return get_c() > other.get_c();
    }

    bool operator<=(Temperature other)
    {
        return get_c() <= other.get_c();
    }

    bool operator>=(Temperature other)
    {
        return get_c() >= other.get_c();
    }

    bool operator==(Temperature other)
    {
        return get_c() == other.get_c();
    }

    bool operator!=(Temperature other)
    {
        return get_c() != other.get_c();
    }

    void operator+=(Temperature other)
    {
        c = c + other.get_c();
    }
};

Temperature operator"" _deg(long double x)
{
    return Temperature(x);
}

Temperature operator"" _K(long double x)
{
    return Temperature(Temperature::k_to_c(x));
}

Temperature operator"" _f(long double x)
{
    return Temperature(Temperature::f_to_c(x));
}

#endif