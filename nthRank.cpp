#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Rank
{
public:
    static string nthRank(const string &st, vector<int> &we, int n){
    	string rcString, tempString;
    	vector<int> winningNumber;
    	vector<string> names;
    	int it, wonNumber=0, tempWonNumber=0, j=0;
        size_t pos, i = 0;

    	if (st.empty()) rcString = "No participants";
    	else{
            // split words into the vector

            // evaluate each string
    		while(pos){
    			st.copy(tempString, pos-i, i+1);
    			i = pos+1;
    			names.emplace_back(tempString);
    			tempWonNumber = tempString.length();
    			for (it = 0; it <= tempString.length(); ++it){
    				tempWonNumber = tempWonNumber+int(tempString[i]);
    			}
    			tempWonNumber = tempWonNumber*we[j];
    			if (tempWonNumber > wonNumber) wonNumber = tempWonNumber;
    			
    			++j;
                pos = st.find(",", i, 1);
    		}

    	}
    	return rcString;
    }
};

int main(int argc, char const *argv[]){
    string st = "Addison,Jayden,Sofia,Michael,Andrew,Lily,Benjamin";
    vector<int> we = {4,2,1,4,3,1,2};
    string sol = "Benjamin";
    
    cout << nthRank(st, we, 4) << endl;
    cout << sol << endl;

    st = "Elijah,Chloe,Elizabeth,Matthew,Natalie,Jayden";
    vector<int> we1 (1, 3, 5, 5, 3, 6);
    sol = "Matthew";
    cout << nthRank(st, we1, 1) << endl;
    cout << sol << endl;

	return 0;
}