// https://www.codewars.com/kata/build-a-pile-of-cubes/train/cpp
// Not complete

#include <math>

class ASum
{
  public:
  static long long findNb(long long m)
  { 
      long long total, rc;
      
      // rc inicial estimation
      rc = cbrt(m);

      while (total =! m)
      {
          
      }
      return rc;
  };
};

void testequal(long long ans,  long long sol) {
    Assert::That(ans, Equals(sol));
}
Describe(findNb_Tests)
{
    It(test1)
    {
        testequal(ASum::findNb(4183059834009), 2022);
        testequal(ASum::findNb(24723578342962), -1);
        testequal(ASum::findNb(135440716410000), 4824);
        testequal(ASum::findNb(40539911473216), 3568);
        testequal(ASum::findNb(26825883955641), 3218);
    }
};