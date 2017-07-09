#include <iostream>
using namespace std;
class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window)
    {
        int conteo = 1;

        if (h > 0 && bounce > 0 && bounce < 1 && window < h)
    	  {
            h = h*bounce;
            while(h >= window)
            {
                cout << "h = " << h << " conteo = " << conteo << endl;
                h = h*bounce;
                conteo = conteo + 2;
            }
            return conteo;
    	  } else
    	  {  
    		    return -1;
    	  }
    };
};