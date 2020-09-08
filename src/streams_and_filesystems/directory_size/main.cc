/**
 * 35. Computing the size of a directory
 * 
 * Write a function that computes the size of a directory, in bytes,
 * recursively. It should be possible to indicate whether symbolic
 * links should be followed or not.
 */

#include <filesystem>
#include <iostream>

using namespace std::filesystem;
using namespace std::string_literals;

long long directory_size(path dir_path, bool symlinks = false)
{
    if (!is_directory(dir_path))
        return 0;

    long long directory_size = 0;

    for (auto &p : recursive_directory_iterator(dir_path))
        if (!(is_directory(p.path()) || (!symlinks && is_symlink(p.path()))) && p.path().filename() != ".DS_Store")
            directory_size += file_size(p.path());

    return directory_size;
}

int main()
{
    path dir_path = "../static/directory_size";
    std::cout << "dir size: " << directory_size(dir_path, true) << "B\n";
}