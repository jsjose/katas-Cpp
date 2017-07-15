// https://www.codewars.com/kata/5536a85b6ed4ee5a78000035/train/cpp

#include <unordered_map>
#include <vector>

typedef std::unordered_map<std::string, double> stringdblmap;
class Tour
{
public:
    static int tour(std::vector<std::string> &arrFriends, std::vector<std::vector<std::string>> &ftwns, stringdblmap &h)
    {
        return 0;
    };
};

//******************
#include <string>
#include <unordered_map>
#include <vector>

typedef std::unordered_map<std::string, double> stringdblmap;
void testequal(int ans, int sol) {
    Assert::That(ans, Equals(sol));
}
void dotest(std::vector<std::string> &arrFriends, std::vector<std::vector<std::string>> &ftwns, stringdblmap &h, int expected)
{
    testequal(Tour::tour(arrFriends, ftwns, h), expected);
}

Describe(tour_Tests)
{
    It(Fixed_Tests)
    {
      std::vector<std::string> friends1 = { "A1", "A2", "A3", "A4", "A5" };
      std::vector<std::vector<std::string>> fTowns1 = { {"A1", "X1"}, {"A2", "X2"}, {"A3", "X3"}, {"A4", "X4"} };
      stringdblmap distTable1 = { {"X1", 100.0}, {"X2", 200.0}, {"X3", 250.0}, {"X4", 300.0} };
      dotest(friends1, fTowns1, distTable1, 889);

      friends1 = { "A1", "A2", "A3", "A4", "A5" };
      fTowns1 = { {"A1", "X1"}, {"A2", "X2"}, {"A3", "X3"}, {"A4", "X4"}, {"A5", "X5"} };
      distTable1 = { {"X1", 100.0}, {"X2", 200.0}, {"X3", 250.0}, {"X4", 300.0}, {"X5", 320.0} };
      dotest(friends1, fTowns1, distTable1, 1020);
    }
};
    

