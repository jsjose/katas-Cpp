// https://www.codewars.com/kata/decode-the-morse-code/train/cpp

#include <iostream>
using namespace std;

std::string decodeMorse(std::string morseCode) {
    // ToDo: Accept dots, dashes and spaces, return human-readable message
    std::string decoded, letter,tt;
    bool noSpace = false;

    for( auto p : morseCode ) {
        if (letter.length() == 0 && p == ' ' && p != morseCode)
        {
            if (noSpace)
            {
                decoded += ' ';
                noSpace = false;
                //cout << " dec -" << p << "-" << endl;
            }
            //cout << " dec " << decoded << endl;
        } else if (letter.length() > 0 && p == ' ')
        {
            decoded += MORSE_CODE[ letter ];
            //cout << "let 2 " << letter << endl;
            letter.erase();
            noSpace = true;
        } else
        {
            letter += p;
            noSpace = true;
        }
    }
    decoded += MORSE_CODE[ letter ];
        decoded += MORSE_CODE[ letter ];
    if (decoded[decoded.size()-1]) == ' ')
        decoded.erase(decoded.end()-1);
//    cout << "-" << decoded << "-" << endl;
//cout << "-" << MORSE_CODE[ letter ] << "-" << endl;
    return decoded;
}


Describe(Example_from_description)
{
    It(should_do_something)
    {
        Assert::That(decodeMorse(".... . -.--   .--- ..- -.. ."), Equals("HEY JUDE"));
    }
};
Describe(Your_own_tests)
{
  // Add more tests here
};

#include <regex>

const std::regex morse("([^\\s]+|\\s{3})");

std::string decodeMorse(std::string morseCode) {
  std::string decoded;
  
  auto begin = morseCode.begin() + morseCode.find_first_not_of(' ');
  auto end = morseCode.begin() + morseCode.find_last_not_of(' ') + 1;
  
  for (auto it = std::sregex_iterator(begin, end, morse); it != std::sregex_iterator(); ++it) {
    std::string str = it->str();
    decoded += str == "   " ? " " : MORSE_CODE[str];
  }
  
  return decoded;
}