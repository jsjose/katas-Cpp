// https://www.codewars.com/kata/directions-reduction

using namespace std;

class DirReduction
{
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> &arr)
    {
        int i, n;
        string dirPrev;

        n = arr.size();
        for (i = 1; i < n; i++)
        {
            dirPrev = arr[0];
            for (auto it = arr.begin()+1 ; it != arr.end() && arr.size() > 0; ++it)
            {
                if ((dirPrev == "NORTH" && *it == "SOUTH") || 
                    (dirPrev == "SOUTH" && *it == "NORTH")|| 
                    (dirPrev == "WEST"  && *it == "EAST")|| 
                    (dirPrev == "EAST"  && *it == "WEST"))
                {
                    arr.erase(it);
                    arr.erase(it-1);
                    break;
                }
                dirPrev = *it;
            }
        }
        return arr;
    };
};

//*************************************************************************

#include <string>
#include <vector>
void testequal(std::vector<std::string> ans, std::vector<std::string> sol)
{
    Assert::That(ans, Equals(sol));
}
Describe(dirReduc_Tests)
{
    It(Fixed_Tests)
    {
        std::vector<std::string> d1 = {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"};
        std::vector<std::string> ans1 = DirReduction::dirReduc(d1);
        std::vector<std::string> sol1 = {"WEST"};
        testequal(ans1, sol1);

        std::vector<std::string> d2 = {"NORTH","SOUTH","SOUTH","EAST","WEST","NORTH", "NORTH"};
        std::vector<std::string> ans2 = DirReduction::dirReduc(d2);
        std::vector<std::string> sol2 = {"NORTH"};
        testequal(ans2, sol2);
    }
};
