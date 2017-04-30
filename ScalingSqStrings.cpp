#include <sstream>
#include <string>
#include <iostream>

using namespace std;

class ScalingSqStrings
{
public:
    static std::string scale(const std::string &strng, int k, int n)
    {
    	ostringstream strngScaled;
    	string strTemp;

    	strTemp.reserve (k*strng.length());

    	for (int i = 0; i < strng.length(); i++)
    	{
    		if (strng.compare(i, 1, "\n") != 0)
    		{
    			cout << strng[i];
    			for (int l = 0; l < k; l++)
    				strTemp = strTemp+strng[i];
    			cout << strTemp << endl;
    		}
    	    else //if (strng.compare(i, 1, "\n"))
    		{
    			for (int j = 0; j < n; j++) 
    				strngScaled << strTemp << "\n";
    			strTemp = "";
    		}	
    		if (i == (strng.length()-1))
    		{
    			for (int j = 0; j < n; j++) 
    			{
    				if (j == (n-1))
    					strngScaled << strTemp;    	
    				else
        				strngScaled << strTemp << endl;								
    			}

    			strTemp = "";    			
    		}

    	}

    	return strngScaled.str();
    }
};

int main(int argc, char const *argv[])
{
	int low, high;
	ScalingSqStrings strScaling;

	std::string d = "abcd\nefgh\nijkl\nmnop";
    std::string s = "aabbccdd\naabbccdd\naabbccdd\neeffgghh\neeffgghh\neeffgghh\niijjkkll\niijjkkll\niijjkkll\nmmnnoopp\nmmnnoopp\nmmnnoopp";
    
    cout << ScalingSqStrings::scale(d, 2, 3) << endl;

    cout << s << endl;

	return 0;
}