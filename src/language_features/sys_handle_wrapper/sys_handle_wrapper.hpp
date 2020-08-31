#ifndef SYS_HANDLE_WRAPPER_H
#define SYS_HANDLE_WRAPPER_H

#include <fstream>
#include <memory>
#include <exception>
#include <iostream>

struct FILEDeleter
{
    void operator()(FILE *file)
    {
        if (file)
            fclose(file);
    }
};

using FILE_unique_ptr = std::unique_ptr<FILE, FILEDeleter>;

FILE_unique_ptr make_fopen(const char *filename, const char *mode)
{
    std::cout << "MAKE_FOPEN\n";
    FILE *file_handle = nullptr;

    file_handle = fopen(filename, mode);

    return FILE_unique_ptr(file_handle);
}

using FILE_shared_ptr = std::shared_ptr<FILE>;

FILE_shared_ptr make_shared_fopen(const char *filename, const char *mode)
{
    std::cout << "MAKE_SHARED_FOPEN\n";
    FILE *file_handle = nullptr;

    file_handle = fopen(filename, mode);

    return FILE_shared_ptr(file_handle, FILEDeleter());
}
#endif