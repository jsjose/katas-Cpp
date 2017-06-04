#include <vector>

void testequal(int ans, int sol) {
    Assert::That(ans, Equals(sol));
}
void dotest(int s, std::vector<double> &a1, int expected)
{
    testequal(GpsSpeed::gps(s, a1), expected);
}

Describe(gps_Tests)
{
    It(Fixed__Tests)
    {
        std::vector<double> x = {0.0, 0.23, 0.46, 0.69, 0.92, 1.15, 1.38, 1.61};
        dotest(20, x, 41);
        x = {0.0, 0.11, 0.22, 0.33, 0.44, 0.65, 1.08, 1.26, 1.68, 1.89, 2.1, 2.31, 2.52, 3.25};
        dotest(12, x, 219);
    }
};