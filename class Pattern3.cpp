
#include<iostream>
using namespace std;class Pattern{
  
public:
  static string pattern(int n);
};
string Pattern::pattern(int n){
    //Happy coding ^_^
    //Your code goes here
    //changing the function name will cause problems because it is called from the test cases
	int i, j;
  string str ="";
  stringstream ss;

  for(int i = 0; i <= n; i++)
	{
		//cout << i << " ";
		for(int j = 0; j < i+1; j++)
		{
			//cout << n-j;
      ss << n-j;
      str = str + ss.str();
      ss.clear();
      //cout << str;
		}
		if (i < n) 
    {
      //cout << endl;
      ss << endl;
      str = str + ss.str();
      ss.clear();
      //cout << str;
    }
	}
	return str;
}