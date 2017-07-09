\\ https://www.codewars.com/kata/550498447451fbbd7600041c/train/cpp

#include <iostream>

using namespace std;

class Same {
    public :static bool comp(vector<int> a1, vector<int> b1)
    {
        bool rcB = true;
        int a2;

        std::vector<int>::reverse_iterator ritb;

cout << "------- start " << a1.size() << endl;
cout << "------- start " << b1.size() << endl;

        if (a1.size() != b1.size())
        {
            rcB = false;
            return rcB;
        }

        for (auto rita = a1.crbegin(); rita != a1.crend(); ++rita)
        {
            a2 = (*rita)*(*rita);
rcB = false;            
cout << "---rita " << *rita << endl;
            cout << "a2 " << a2 << endl;
            for (ritb = b1.rbegin(); ritb != b1.rend(); ++ritb)
            {
                cout << "ritb " << *ritb << endl;
                if (*ritb == a2)
                {
                    rcB = true;
                    *ritb = -1;
                    break;
                }
            }
            if (!rcB)
            {
                break;
            }
        }

        return rcB;
    };
};


Describe(SameTest)
{
    It(test1)
    {
        static const int arr1[] = {121, 144, 19, 161, 19, 144, 19, 11};
        vector<int> a1 (arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));
        static const int arr2[] = {11*11, 121*121, 144*144, 19*19, 161*161, 19*19, 144*144, 19*19};
        vector<int> b2 (arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));
        bool r = Same::comp(a1, b2); // true
        Assert::That(r, Equals(true));
        
    }
};