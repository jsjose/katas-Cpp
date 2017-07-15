// https://www.codewars.com/kata/equal-sides-of-an-array/train/cpp
// incomplete
#include <vector>
using namespace std;

int find_even_index (const vector <int> numbers) {
    int i, sum = 0, sum2 = 0, resto, div;
    
    for (vector<int>::iterator it = numbers.begin() ; it != numbers.end(); ++it)
    {
       sum =+ *it; 
    }
    
    resto = sum % 2;
    div = sum / 2;
    if (resto == 0)
    {
        for (i = 0; sum2 <= div; i++)
            sum2 =+ sum2 + numbers[i];
        if (sum2 == div)
            return i;
        else
            return -1;
    }
    else 
        return -1;
}

//***************************************************

#include <vector>
using namespace std;

Describe (ShouldPassAllTheTestsProvided)
{
    It (CoreTests)
    {
      {
        vector <int> numbers { 1,2,3,4,3,2,1 };
        int expected = 3;
        Assert::That(find_even_index (numbers), Equals(expected));
      }
      
      {
        vector <int> numbers { 1,100,50,-51,1,1 };
        int expected = 1;
        Assert::That(find_even_index (numbers), Equals(expected));
      }
       
      {
        vector <int> numbers { 1,2,3,4,5,6 };
        int expected = -1;
        Assert::That(find_even_index (numbers), Equals(expected));
      }
       
      {
        vector <int> numbers { 20,10,30,10,10,15,35 };
        int expected = 3;
        Assert::That(find_even_index (numbers), Equals(expected));
      }
       
      {
        vector <int> numbers { 20,10,-80,10,10,15,35 };
        int expected = 0;
        Assert::That(find_even_index (numbers), Equals(expected));
      }
       
      {
        vector <int> numbers { 10,-80,10,10,15,35,20 };
        int expected = 6;
        Assert::That(find_even_index (numbers), Equals(expected));
      }
       
      {
        vector <int> numbers { 0,0,0,0,0 };
        int expected = 0;
        Assert::That(find_even_index (numbers), Equals(expected));
      }
      
      {
        vector <int> numbers { -1,-2,-3,-4,-3,-2,-1 };
        int expected = 3;
        Assert::That(find_even_index (numbers), Equals(expected));
      }
    }
};
