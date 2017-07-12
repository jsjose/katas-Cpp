// https://www.codewars.com/kata/5934d648d95386bc8200010b/train/cpp

using namespace std;

string kaCokadekaMe(string word)
{
    string rcWord;
    int i = 0;
    bool lastVowel = false;
    string vowels = "aeiouAEIOU";
    size_t found;
    
    rcWord = "ka";
 
    while (i < word.length())
    {
        found = vowels.find(word[i]);
        if (found!=string::npos)
        {
            while (!lastVowel && i < word.length())
            {
                found = vowels.find(word[i]);
                if (found!=string::npos)
                {
                    rcWord = rcWord + word[i];
                    lastVowel = false;
                }
                else
                {
                    lastVowel = true;
                    rcWord = rcWord + "ka"+word[i];
                }
                i++;
            }  
            lastVowel = false;
        }
        else 
        {
            rcWord = rcWord + word[i];
            i++;
        }
    }

    return rcWord;
}

//***********************************************

Describe(kaTekasts)
{
    It(KaBakasickaTekast)
    {
       test("kaka" , kaCokadekaMe("ka"),"ka");    
       test("kaaa" , kaCokadekaMe("aa"),"aa");  
       test("kaka" , kaCokadekaMe("ka"), "ka");    
       test("kaa" , kaCokadekaMe("a"),"a"); 
       test("kaz" , kaCokadekaMe("z"), "z");    
       test("kaAkabbaa" , kaCokadekaMe("Abbaa"),"Abbaa"); 
       test("kamaikantekanakance" , kaCokadekaMe("maintenance"), "maintenance");    
       test("kaWookadie" , kaCokadekaMe("Woodie"), "Woodie");        
       test("kaIkancokamprekahekansikabikalikatiekas" , kaCokadekaMe("Incomprehensibilities"),"Incomprehensibilities");         
    }
};