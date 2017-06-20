// not finished
#include <string>
using namespace std;

double money_value(const string &s)
{
  	int i;
  	double money;
  	char s1[s.length()];
  
 	// Look for  
  	for (i = 0; i < s.length(); ++i)
  	{
  		if (s.compare(i, 1, "$"))
  		{
  			// s1.push_back(s[i]);
  			s1[i]=s[i];
  		}			
  	}

  	money = atof(s1);
	return money;
}