// https://www.codewars.com/kata/57b31dc11fae8a4137000693/train/cpp
// not finish
#include <iostream>
std::vector<std::string> splitMessage(std::string message, int count)
{
    std::vector<std::string> result;
    std::string mess, age;
    int i, j;

    mess.reserve(message.length());
    age.reserve(message.length());

    std::cout << " age " << age << std::endl;

    for (i = 0; i < message.length(); i++)
    {
        mess[i] = '-';
    }    

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < message.length(); j++)
        {
            age[j] = '-';
        } 
        for (j = i; j < message.length(); j =+count)
        {
            age[j] = message[j];   
        }
        result.emplace_back(age);
    }
    return result;
}

//***********************************************************

Describe(ExampleTest)
{
    It(BasicTest)
    {
        std::vector<std::string> expected =
        {
            "I--h--k--o--a-- --l--e--",
            "- --i-- --u--r--a-- --x-",
            "--t--n--y-- --e--l--s--y"
        };
        
        std::vector<std::string> actual = splitMessage("I think you are all sexy", 3);

        Assert::That(actual, Is().EqualToContainer(expected));
    }
};