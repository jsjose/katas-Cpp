// https://www.codewars.com/trainer/cpp

#include <vector>
typedef unsigned long long ull;
class ProdFib
{
public:
  static std::vector<ull> productFib(ull prod)
  {
      ull fn=1, fn1=1, fni;
      std::vector<ull> rcV;

      while(fn*fn1 < prod)
      {
          fni = fn1;
          fn1 = fn+fni;
          fn = fni;           
      }
      rcV.emplace_back(fn);
      rcV.emplace_back(fn1);
          
      if (fn*fn1 == prod)
      {
          rcV.emplace_back(true);
      } else
      {  
          rcV.emplace_back(false);
      }
      return rcV;
  };
};

#include <vector>

typedef unsigned long long ull;
void testequal(std::vector<ull> ans, std::vector<ull> sol)
{
    Assert::That(ans, Equals(sol));
}
void dotest(ull prod, std::vector<ull> expected)
{
    testequal(ProdFib::productFib(prod), expected);
}
Describe(productFib_Tests)
{
    It(Fixed__Tests)
    {
        dotest(4895, {55, 89, true});
        dotest(5895, {89, 144, false});
        dotest(74049690, {6765, 10946, 1ULL});
        dotest(84049690, {10946, 17711, 0ULL});
    }
};    