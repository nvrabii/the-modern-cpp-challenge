# the-modern-cpp-challenge

## How to build

Chapter names are written in snake case, lower case: Language features -> `language_features`. Look up task/program names in the [Contents](#contents) section.

```
../the-modern-cpp-challenge $ cd build
../build $ cmake ../src/<chapter_name>/<task_folder_name>
../build $ make
```

## How to run

```
../build $ ./<task_name_with_no_extension>
```

## Project structure

- `bin/` - _to do_
- `build/` - build folder
- `src/` - source folder
  - `math_problems/` - Chapter 1
  - `language_features/` - Chapter 2
  - `strings_and_regexp/` - Chapter 3
  - `streams_and_filesystems/` - Chapter 4
  - ...
- `.gitignore`
- `README.md`

## Contents

### Chapter 1: Math Problems

1. Sum of naturals divisible by 3 and 5 (`sum_of_divisible_naturals.cc`)
2. Greatest common divisor (`gcd.cc`)
3. Least common multiplier (`lcm.cc`)
4. Largest prime smaller than given number (`largest_prime.cc`)
5. Sexy prime pairs (`sexy_prime_numbers.cc`)
6. Abundant numbers (`abundant_numbers.cc`)
7. Amicable numbers (`amicable_numbers.cc`)
8. Armstrong numbers (`armstrong_numbers.cc`)
9. Prime factors of a number (`prime_factors.cc`)
10. Gray code (`gray_code.cc`)
11. Converting numerical values to Roman (`numerical_to_roman.cc`)
12. Largest Collatz sequence (`largest_collatz_sequence.cc`)
13. Computing the value of Pi (`value_of_pi.cc`)
14. Validating ISBNs (`isbn_validation.cc`)

### Chapter 2: Language Features

15. IPv4 data type (`ipv4_data_type/ipv4_test.cc`)
16. Enumerating IPv4 addresses in a range (`ipv4_range/ipv4_range_test.cc`)
17. Creating a 2D array with basic operations (`matrix/matrix_test.cc`)
18. Minimum function with any number of arguments (`min_function/min_test.cc`)
19. Adding a range of values to a container (`container_add/container_add/test.cc`)
20. Container any, all, none (`container_query/container_query_test.cc`)
21. System handle wrapper (`sys_handle_wrapper/shv_test.cc`) (Remark: `/shv_test` will run properly with a cmd argument - relative path to the file `input.txt`)
22. Literals of various temperature scales (`temp_literals/temp_literals_test.cc`)

### Chapter 3: Strings and Regular Expressions

23. Binary to string conversion (`binary_to_string/binary_to_string.cc`)
24. String to binary conversion (`string_to_binary/string_to_binary.cc`)
25. Capitalizing an article title (`capitalize/capitalize.cc`)
26. Joining strings together separated by a delimiter (`join/join.cc`)
27. Splitting a string into tokens with a list of possible delimiters (`split/split.cc`)
28. Longest palindromic substring (`longest_palindrome/longest_palindrome.cc`)
29. License plate validation (`license_plates/licence_plates.cc`)
30. Extracting URL parts (`url_parser/url_parser.cc`)
31. Transforming dates in strings (`date_to_string/date_to_string.cc`)

### Chapter 4: Streams and Filesystems

32. Pascal's triangle (`pascals_triangle/main.cc`)
33. Tabular printing of a list of processes (`processes_table/main.cc`)
34. Removing empty lines from a text file (`removing_empty_lines/main.cc`)
35. Computing the size of a directory (`directory_size/main.cc`)
36. Deleting files older than a given date
37. Finding files in a directory that match a regular expression
38. Temporary log files
