// https://www.codewars.com/kata/5536a85b6ed4ee5a78000035/train/cpp

#include <iostream>
#include <unordered_map>
#include <vector>
#include <math.h>
using namespace std;

typedef unordered_map<string, double> stringdblmap;
class Tour
{
public:
    static int tour(vector<string> &arrFriends, vector<vector<string>> &ftwns, stringdblmap &h)
    {
        double dist = 0;
        int i, j, friends, lastFriend = 0;

        friends = min(arrFriends.size(),ftwns.size());
        dist = h[ftwns[0][1]];    

        cout << " ******  " <<  friends << endl;
        cout << "j = " << 0 << " i = " << 0 << " " << arrFriends[0] << "  " << ftwns[0][1]  << " " << ftwns[0][0] << " " << h[ftwns[0][1]] << endl;

        for (i = 1, j = 1; j <= friends-1; ++i)
        {
            //cout << "j = " << j << " i = " << i << endl;
            cout << "j = " << j << " i = " << i << " " << arrFriends[j] << " " << ftwns[i][1]  << " " << ftwns[i][0] << " " << h[ftwns[i][1]] << endl;
 
            if (arrFriends[j] == ftwns[i][0])
            {
                dist = dist + sqrt(pow(h[ftwns[i][1]],2)-pow(h[ftwns[lastFriend][1]],2));

                cout << "j = " << j << " i = " << i << " " << arrFriends[j] << " " << ftwns[i][1]  << " " << ftwns[i][0] << " " << h[ftwns[i][1]] << endl;
                if (j == friends-1)
                {
                    cout << "cierre " << endl;
                    dist = dist + h[ftwns[i][1]];
                }
                lastFriend = i;
                j++;
            }
            else if (j == friends-1)
            {
                cout << "cierre " << endl;
                dist = dist + h[ftwns[i][1]];
            }
 //               cout << "j = " << j << "  " << arrFriends[i] << " " << ftwns[j][1]  << " " << ftwns[j][0] << " " << h[ftwns[j][1]] << endl;

        }

        cout << " dist " << dist << endl;
        return int(dist);
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
    

