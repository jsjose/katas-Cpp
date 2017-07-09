// https://www.codewars.com/kata/566be96bb3174e155300001b/train/cpp

#include <math.h>

const double G = 9.81;
const double Conv = 3.6;

class Ball
{
    public: static int maxBall(int v0)
    {
        return int(round(v0/G*10/Conv));        
    };
};

// ********************************************************************

using namespace std;

void testequal(int ans, int sol) {
    Assert::That(ans, Equals(sol));
}

Describe(maxBallTests)
{
    It(test1)
    {
        testequal(Ball::maxBall(37), 10);
	      testequal(Ball::maxBall(45), 13);
	      testequal(Ball::maxBall(99), 28);
	      testequal(Ball::maxBall(85), 24);
    }
};