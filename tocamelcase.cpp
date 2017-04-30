#include <string>
#include <ctype.h>
#include <iostream>

using namespace std;

string to_camel_case(std::string text){
    string strTemp;

    strTemp.reserve (text.length());

    for (int i = 0; i < text.length(); ++i){
    	if ((text.compare(i, 1, "-") == 0) or (text.compare(i, 1, "_")) == 0){
    		// cout << "text[" << i << "] " << text[i] << endl;
    		if (i+1 < text.length()){
    			if (islower(text[i+1])){
    				strTemp += toupper(text[i+1]);
    				i = i+1;
    			}
    		}
    	}
    	else{
    		// cout << "text[" << i << "] " << text[i] << endl;
    		strTemp += text[i];
    	}
	}
    return strTemp;
}

int main(int argc, char const *argv[]){
	string d = "the-stealth-warrior";
    string s = "theStealthWarrior";
	string d1 = "The_stealth_warrior";
    string s1 = "TheStealthWarrior";
    
    cout << to_camel_case(d) << endl;
    cout << s << endl;
   	cout << to_camel_case(d1) << endl;
    cout << s1 << endl;

	return 0;
}