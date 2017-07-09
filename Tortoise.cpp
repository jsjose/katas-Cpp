//https://www.codewars.com/trainer/cpp

#include <iostream>
#include <math.h>
//#include <iomanip> // for std::setprecision()
// complete but trickie

const long double Conv = 60.000001;

class Tortoise
{
public:
    static std::vector<int> race(int v1, int v2, int g)
    {   
        std::vector<int> result;
        long double horas, minutos, segundos;
        long double tiempo, v, resto;

        //std::setprecision(4);

        if (v1 > 0 && v2 > 0 && g > 0 && v2 > v1)
        {
            v = v2-v1;
            tiempo = g/v;
            horas = int(tiempo);
            resto = tiempo-horas;
            minutos = resto*Conv;
            resto = resto-int(minutos)/Conv;
            segundos = resto*Conv*Conv;
            
            result.emplace_back(int(horas));
            result.emplace_back(int(minutos));
            result.emplace_back(int(segundos));
        } else
        {
            result = {-1, -1, -1};
        }
        return result;
    };
};


//************************************************************

#include <vector>

void testequal(std::vector<int> ans, std::vector<int> sol)
{
    Assert::That(ans, Equals(sol));
}
void dotest(int v1, int v2, int g, std::vector<int> expected)
{
    testequal(Tortoise::race(v1, v2, g), expected);
}

Describe(race_Tests)
{
    It(Fixed__Tests)
    {
        dotest(720, 850, 70, {0, 32, 18});
        dotest(820, 81, 550, {-1, -1, -1});
        dotest(80, 91, 37, {3, 21, 49});
    }
};
