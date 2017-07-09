// https://en.wikipedia.org/wiki/Leibniz_formula_for_%CF%80

#define M_PI 3.14159265358979323846  /* pi */

#include <math.h>
#include <iomanip>
#include <sstream>

const double m_pi = 3.14159265358979323846;  /* pi */
using namespace std;

class PiApprox
{
    public: static string iterPi(double epsilon)
    {
    	int k=1, s = -1;
    	double pi=4;
      string rcS;

   	  while (fabs(pi-m_pi) > epsilon) 
      //while (k<10)
    	{
    		pi = pi + double(s)/(2*k+1)*4;
    		k++;
    		s = -s;
    	}	

      stringstream stream;
      stream << setprecision(11) << pi;
      string s_pi = stream.str();

      rcS = "[" + to_string(k) + ", " + s_pi + "]";
    	return rcS;
	  };
};

Describe(PiapproxTest)
{
    It(test1)
    {
        string sol1 = "[10, 3.0418396189]";
        string ans1 = PiApprox::iterPi(0.1);
        Assert::That(ans1, Equals(sol1));
    }
};