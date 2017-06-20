#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Kata
{
public:
    static std::vector<int> Encode(std::string str, int n)
    {
      std::vector<int> code, key;
      string keyStr;
      int i=0, j;
      
      keyStr = to_string(n);
      
      for (j = 0; j < str.length(); j++)
      {
        code.push_back (int(str[j])+int(keyStr[i])-144);
        i++;
        if (i >= keyStr.length())
        {
          i = 0;
        }
      }
      
      return code;
    };
};

Describe(sample_tests)
{
    It(test1)
    {
        Assert::That(Kata::Encode("scout", 1939), Equals(std::vector<int>({20, 12, 18, 30, 21})));
        
    }
    It(test2)
    {
      Assert::That(Kata::Encode("masterpiece", 1939), Equals(std::vector<int>({14, 10, 22, 29, 6, 27, 19, 18, 6, 12, 8})));
    }
};