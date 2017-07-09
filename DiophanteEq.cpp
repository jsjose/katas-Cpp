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
    long long y, x, u, v, t, res, resto;
    bool sol = false;
        
    if (n > 100) {t = n/2;} else {t = n;}   
    for (u = t; u > 0; u--)
    {
      resto = n%u;
      if (resto == 0)
      {
        v = n/u;
        x = (u+v)/2;
        y = (v-u)/4;
        // cout << "n = " << n << " u = " << u << " v = " << v << " x = " << x << "  y = " << y << endl;
        if (x > 0 && y > 0)
        {
          sol = true;
          rc.push_back ({x, y});
          cout << "n = " << n << " u = " << u << " v = " << v << " x = " << x << "  y = " << y << endl;
        }
      }  
    } 
    
    if (not sol)
    {
      cout << " not sol" << endl;
    }
    return rc;
  };
};