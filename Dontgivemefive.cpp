#include <sstream>
#include <iostream>
#include <string>

using namespace std;

int dontGiveMeFive(int start, int end)
{
  stringstream temp; 
  std::string stemp;
  int z, i, j;

  z = end - start + 1;

  for (j = start; j <= end; j++)
  {
  	temp << j;
  	stemp = temp.str();
  	for ( i =0; i<stemp.length(); ++i)
    {
    	if (!stemp.compare(i, 1, "5")) 
    	{
    		z--;
    		break;
    	}
    }
    temp.str("");
  } 

  return z;
}

int main()
{
	int low, high, k;

	cout << "Don't give me five" << endl;
	cout << "Enter a Number (low):" << endl;
	cin >> low;
	cout << "Enter a Number (high):" << endl;
	cin >> high;

	k = dontGiveMeFive(low, high);

	cout << "number = " << k << endl;

	return 0;
}