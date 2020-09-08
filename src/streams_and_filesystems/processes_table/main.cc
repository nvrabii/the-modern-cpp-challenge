/**
 * 33. Tabular printing of a list of processes
 * 
 * Suppose you have a snapshot of the list of all processes in a
 * system. The information for each process includes name,identifier,
 * status (which can be either running or suspended), account name
 * (under which the process runs), memory size in bytes, and platform
 * (which can be either 32-bit or 64-bit). Your task is to write a
 * function that takes such a list of processes and prints them to the
 * console alphabetically, in tabular format. All columns must be
 * left-aligned, except for the memory column which must be
 * right-aligned. The value of the memory size must be displayed in KB.
 * 
 * Example:
 * chrome.exe   1044    Running marius.bancila  25180   32-bit
 */

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

enum State
{
    Running,
    Suspended
};

enum SystemArchitecture
{
    x32bit,
    x64bit
};

class Process
{
public:
    std::string name;
    int process;
    State state;
    std::string user;
    int size;
    SystemArchitecture sys;

    Process(
        std::string n,
        int p,
        State st,
        std::string u,
        int sz,
        SystemArchitecture sy) : name(n),
                                 process(p),
                                 state(st),
                                 user(u),
                                 size(sz),
                                 sys(sy){};

    std::string to_string()
    {
        std::string state_name = state == Running ? "Running" : "Suspended";
        std::string system_name = sys == x32bit ? "32-bit" : "64-bit";
        std::stringstream os;
        os << std::left << std::setw(12) << name << ' ' << std::setw(5) << process << ' ' << std::setw(10) << state_name << ' ' << std::setw(16) << user << ' ' << std::right << std::setw(8) << size << ' ' << std::left << system_name;

        return os.str();
    }
};

int main()
{
    std::vector<Process> ls{
        Process("chrome.exe", 1044, Running, "marius.bancila", 25180, x32bit),
        Process("skype.exe", 1043, Running, "SYSTEM", 5180, x32bit),
        Process("cmd.exe", 512, Running, "marius.bancila", 125180, x32bit),
        Process("chrome.exe", 149, Running, "marius.bancila", 1225180, x32bit)};

    sort(ls.begin(), ls.end(), [](Process x, Process y) { return x.name.compare(y.name) < 0; });

    for (auto el : ls)
        std::cout << el.to_string() << '\n';
}