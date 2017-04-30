// 
#include <iostream>
#include <vector>

using namespace std;

class GapInPrimes
{
public:
	static bool isPrime(int p)
    {
    	bool isP = true;

    	for (int i = 2; i < p; ++i)
    	{
    		if (p%i == 0) 
    		{
    			isP = false;
    			break;
    		}
    	}
    	return isP;
    }
    static pair <long long, long long> gap(int g, long long m, long long n)
    {
    	pair <long long, long long> rc;
    	bool notGap;

		rc = make_pair (0, 0);
    	
    	for (int i=m; i<=n-g; ++i)
    	{
    		notGap = false; 
    		if (isPrime(i))
    		{	
    			for (int j = i+1; j < i+g; ++j)
    			{
    				if (isPrime(j)) 
    				{
    					notGap = true; 
    					break;    					
    				}
    			}
    			if (isPrime(i+g) && !notGap)
    			{
    				rc = make_pair (i, i+g);
    				break;
    			}
    		}
    	}
    	return rc;	
    }
};

int main(int argc, char const *argv[])
{
	GapInPrimes pPrime;
	pair <long long, long long> rc;

	rc = make_pair (0, 0);
	rc = pPrime.gap(2,100,110);
    cout << "primer primo = " << rc.first << " segundo primo = " <<  rc.second << endl;

	rc = make_pair (0, 0);
	rc = pPrime.gap(4,100,110);
    cout << "primer primo = " << rc.first << " segundo primo = " <<  rc.second << endl;

	rc = make_pair (0, 0);
	rc = pPrime.gap(6,100,110);
    cout << "primer primo = " << rc.first << " segundo primo = " <<  rc.second << endl;

	rc = make_pair (0, 0);
	rc = pPrime.gap(8,300,400);
    cout << "primer primo = " << rc.first << " segundo primo = " <<  rc.second << endl;

	rc = make_pair (0, 0);
	rc = pPrime.gap(10,300,400);
    cout << "primer primo = " << rc.first << " segundo primo = " <<  rc.second << endl;

	return 0;
}