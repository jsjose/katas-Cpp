namespace Triangle
{
  bool isTriangle(int a, int b, int c)
  {
    long long max, total, aa, bb, cc;
    bool rc = true;
    
    aa = a;
    bb = b;
    cc = c;
    
    if (a <= 0 || b <= 0 || c <= 0)
    { 
        rc = false;
    } else 
    {
        max = (a < b) ? b : a;
        max = (max < c) ? c : max;
    
        total = aa+bb+cc-max;
        if (total <= max)
        {
            rc = false;
        }
    }
    return rc;
  }
};

#include <cmath>
#include <iostream>

const double PI = 3.141592653589793238463;

namespace Triangle
{
  bool isTriangle(int a, int b, int c)
  {
    double alfa, beta, gamma;
    bool rc = true;
    
    // https://en.wikipedia.org/wiki/Solution_of_triangles
    if (a <= 0 || b <= 0 || c <= 0)
    { 
        rc = false;
    } else 
    {
        alfa = (b*b+c*c-a*a)/(2*b*c);
        beta = (a*a+c*c-b*b)/(2*a*c);
        gamma = (a*a+b*b-c*c)/(2*a*b);
        if (alfa > 1 || beta > 1 || gamma > 1)
        {
            std::cout << " 1 a = " << a << " b = " << b << " c = " << c << std::endl;
            rc = false;
        } else
        {
            alfa = acos(alfa);
            beta = acos(beta);
            gamma = acos(gamma);            
            if (alfa == 0 || beta == 0 || gamma == 0)
            {
                std::cout << " 2 a = " << alfa << " b = " << beta << " c = " << gamma << std::endl;
                rc = false;
            }
        } 
    }
    return rc;
  }
};


Describe(TriangleTests)
{
    It(Zero_ReturnsFalse)
    {
        Assert::That(Triangle::isTriangle(0,0,0),IsFalse());
        Assert::That(Triangle::isTriangle(0,1,2),IsFalse());
    }

    It(Negative_ReturnsFalse)
    {
        Assert::That(Triangle::isTriangle(-17,15,20),IsFalse());
        Assert::That(Triangle::isTriangle(-17,-15,20),IsFalse());
    }


    It(ValidTriangles_ReturnsTrue)
    {
        Assert::That(Triangle::isTriangle(15,17,20),IsTrue());
        Assert::That(Triangle::isTriangle(10,10,10),IsTrue());
        Assert::That(Triangle::isTriangle(10,5,10),IsTrue());

    }

    It(InvalidTriangles_ReturnsFalse)
    {
        Assert::That(Triangle::isTriangle(3,2,1),IsFalse());
        Assert::That(Triangle::isTriangle(10,10,20),IsFalse());
    }
};
