// https://www.codewars.com/kata/515e271a311df0350d00000f/train/cpp

#include <vector>
#include <math.h>

int square_sum(const std::vector<int>& numbers)
{
    int rcI = 0, i;

    for (auto rit = numbers.crbegin(); rit != numbers.crend(); ++rit)
    {
        rcI = rcI + pow(*rit,2);
    }

    return rcI;
}

Describe(test_square_sum)
{
    It(should_pass_some_basic_tests)
    {
        Assert::That(square_sum({1, 2}), Equals(5));
        Assert::That(square_sum({0, 3, 4, 5}), Equals(50));
    }
};