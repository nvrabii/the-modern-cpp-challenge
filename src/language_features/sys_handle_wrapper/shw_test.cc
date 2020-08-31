#include <string>

#include "sys_handle_wrapper.hpp"

int main(int argc, char *argv[])
{
    std::cout << "START\n";
    std::string path = "";
    if (argc > 1)
        path = argv[1];

    FILE_unique_ptr file_handle =
        make_fopen((path + "input.txt").c_str(), "r");
    if (!file_handle)
        return 1;

    FILE_shared_ptr shared_file_handle =
        make_shared_fopen((path + "input.txt").c_str(), "r");
    if (!shared_file_handle)
        return 1;
}