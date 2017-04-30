#include <iostream>
#include <string>

class Kata
{
public:
    std::string replaceNth(std::string text, int n, char oldValue, char newValue)
    {
    	int count = 0;
    	int i:

    	for ( i =0; i<text.length(); ++i)
      	//for ( std::string::iterator it=text.begin(); it!=text.end(); ++it)
    	{
    		if (text[i] == oldValue)
    		{
    			count++;
    			if (count == n)
    			{
    				text[i] = newValue;
    				count = 0;
    			}
    		}
    	}

        return text;
    }
};