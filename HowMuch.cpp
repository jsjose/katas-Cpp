#include <sstream>
#include <string>
#include <iostream>

using namespace std;

class Carboat
{

  public:
  static string howmuch(int m, int n)
  {
 	int i, pB, pC;
  	ostringstream solStr;

	cout << m << endl;
	cout << n << endl;

    solStr << "[";
          
  	for (i=m; i<=n; ++i)
  	{
      	pB = (i-2)%7;
      	pC = (i-1)%9;
      	if (i == 9991)
      	{
      		cout << pB << endl;
      		cout << pC << endl;
      	}
  		if ((pB == 0) && (pC == 0))
  		{
  			pB = (i-2)/7;
  			pC = (i-1)/9;
  			solStr << "[M: " << i << " B: " << pB << " C: " << pC << "]";	
  		} 	
        else continue;
  	}
  	solStr << "]";
  	return solStr.str();
  }
};

int main(int argc, char const *argv[])
{
	int low, high;
	Carboat iCarboat;

	cout << "Don't give me five" << endl;
	cout << "Enter a Number (low):" << endl;
	cin >> low;
	cout << "Enter a Number (high):" << endl;
	cin >> high;

    cout << iCarboat.howmuch(low, high) << endl;

	return 0;
}