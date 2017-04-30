#include <sstream>
#include <string>
#include <iostream>

using namespace std;

//string header file and namespace are already included for you
string pattern(int n){
	ostringstream solPattern;
	int i, j;

	for (i = 1; i <= n; i++)
    {
    	for (j = 1; j<= i; j++) solPattern << i;
    	solPattern << endl;	
    }

    return solPattern.str();
}