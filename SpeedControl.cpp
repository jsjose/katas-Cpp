class GpsSpeed
{
public:
    static int gps(int s, std::vector<double> &x)
    {
    	int i, max=0;
    	int maxSpeed = 0, speed;


    	// for (std::vector<>::iterator i = .begin(); i != .end(); ++i)
    	for (i = 1; i < x.length(); ++i)
    	{
    		speed = (x[i]-x[i-1])*3600/s;
    		if (speed >= maxSpeed)
    		{
    			maxSpeed = speed;
    		}
    	}
    	return maxSpeed;
    }
};