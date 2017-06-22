#include <vector>
#include <utility>
#include <iostream>

using namespace std;

class Dioph
{
  public:
  static std::vector<std::pair <long, long>> solEquaStr(long long n)
  {
    std::vector<std::pair <long, long>> rc;
    long long i, j, res;
        
    for (j = 0; j < n; j++)
    {
      for (i = 0; i <= j/2; i++)
      {
        res = (j-2*i)*(j+2*i);
        if (res == n)
        {
          rc.push_back ({j,i});
        }
      } 
    }  
    return rc;
  };
};