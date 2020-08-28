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

- `.vscode` - instruction for build and debug
- `build/` - build folder
- `src/` - source folder
  - `math_problems/` - Chapter 1 solutions
  - `language_features/` - Chapter 2 solutions
  - ...
- ...

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
