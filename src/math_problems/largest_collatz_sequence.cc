/**
 * 12. Largest Collatz sequence
 * Write a program that determines and prints which number up to 1 million
 * produces the longest Collatz sequence and what its length is.
 */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

static const unsigned int MAX = 100;

unsigned int collatz(unsigned int index, vector<unsigned int> &seq)
{
    if (index == 1)
        return 0;

    if (index < seq.size() && seq.at(index))
        return seq.at(index) + 1;

    return collatz(index % 2 ? index * 3 + 1 : index / 2, seq) + 1;
}

int main()
{
    vector<unsigned int> seq = vector<unsigned int>(MAX);
    seq.at(1) = 0;

    for (unsigned int i = 1; i < MAX; i++)
        seq.at(i) = collatz(i, seq);

    vector<unsigned int>::iterator max = max_element(seq.begin() + 2, seq.end());

    cout << distance(seq.begin(), max) << " : " << *max << endl;
}