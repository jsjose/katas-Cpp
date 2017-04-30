#include <sstream>

using namespace std;

class SequenceSum{
  int count;
  public:
  SequenceSum (int);
  string showSequence(){
  	ostringstream temp;  //temp as in temporary
    int x = 0;
    
    if (count == 0)
    {
      temp << "0=0";
      return temp.str();
    }
    
    if (count < 0)
    {
      temp << count << "<0";
      return temp.str();
    }
    
    for(int i = 0; i <= count; i++)
    {
    	if (i<count)
      {
        x = x+i;
    		temp << i << "+";
    	}
      else
      {
        x = x+i;
    		temp << i << " = " << x;
      }  
    }

    return temp.str();
  }
};

SequenceSum::SequenceSum (int c) {
  count = c;
}