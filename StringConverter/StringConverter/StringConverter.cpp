#include <iostream>
#include <cctype>
#include <locale>
#include <string>
#include <map>

int main()
{
    setlocale(LC_ALL, "");
    std::string inputStr;
    getline(std::cin, inputStr);
    std::map<char, int> charCounter;

    for (const char& c : inputStr)
    {
        charCounter[std::tolower(c, std::locale::classic())]++;
    }
    for (const char&c : inputStr)
    {
        std::cout<<((charCounter[std::tolower(c, std::locale::classic())] > 1) ? (')') : ('('));
    }
    std::cout<<std::endl;
}