/**
 * 34. Removing empty lines from a text file
 * 
 * Write a program that, given the path to a text file, modifies the
 * file by removing all empty lines. Lines containing only whitespaces
 * are considered empty.
 */

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char *argv[])
{
    std::ifstream input_file("../static/removing_empty_lines/test.txt");
    std::ofstream output_file("../static/removing_empty_lines/test_trimmed.txt");

    std::stringstream output_buffer;

    if (input_file.is_open())
    {
        std::string buffer;

        while (getline(input_file, buffer))
            if (buffer.length())
                output_buffer << buffer << '\n';

        input_file.close();
    }
    else
    {
        std::cout << "Could not find input file\n";
    }

    if (output_buffer.str().length() && output_file.is_open())
    {
        // removing the last \n character. not the most elegant solution
        output_file << output_buffer.str().substr(0, output_buffer.str().length() - 1);
        output_file.close();
    }
    else
    {
        std::cout << "Could not write output\n";
    }
}