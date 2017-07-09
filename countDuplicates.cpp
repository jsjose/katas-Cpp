#include <iostream>
#include <stdio.h>

// using namespace std;

size_t duplicateCount(const std::string& in); // helper for tests

size_t duplicateCount(const char* in)
{
    int i, n;
    size_t rc = 0;
    int dup[26+33+4+6] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                   0,0,0,0,0,0,0,
                   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                   0,0,0,0,0,0,
                   0,0,0,0};
    // 26 letters, 65 A 90 Z 97 a 122 z
    // 32 to 64 included
    // 123 to 126 included
    // 91 to 96 included
        
    for (i = 0; i < strlen(in); ++i)
    {
        n = int(in[i]);
        if (n>=65 && n<=90)
        {
            dup[n-65+33]++;    
        }
        else if (n>=97 && n<=122)
        {
            dup[n-97+33]++;    
        } else if (n>=32 && n<=64)
        {
            dup[n-32]++;    
        } else if (n>=123 && n<=126)
        {
            dup[n-64+6]++;
        }
        else if (n>=91 && n<=96)
        {
            dup[n-91+59]++;
        }
    }
    
    for (i=0; i<26+33+4+6; ++i)
    {
        if (dup[i]>1)
        {
            rc++;
        } 
    }
    return rc;
}


Describe(sample_Tests)
{
    It(small_Tests)
    {
        Assert::That(duplicateCount(" "), Equals(0));
        Assert::That(duplicateCount(""), Equals(0));
        Assert::That(duplicateCount("asdfghjkl;'\\"), Equals(0));
        Assert::That(duplicateCount("asdfghjkl;'\\'"), Equals(1));
        Assert::That(duplicateCount("aabbcde"), Equals(2));
        Assert::That(duplicateCount("aabBcde"), Equals(2));
        Assert::That(duplicateCount("Indivisibility"), Equals(1));
        Assert::That(duplicateCount("Indivisibilities"), Equals(2));
    }
};