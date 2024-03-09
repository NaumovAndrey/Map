#include <iostream>
#include <map>
#include <string>

bool anagrams(const std::string& str1, const std::string& str2)
{
    std::map<char, int> freq1, freq2;

    for (char c : str1)
    {
        freq1[c]++;
    }

    for (char c : str2)
    {
        freq2[c]++;
    }

    return freq1 == freq2;
}

void task3HW()
{
    std::string text;
    while (std::getline(std::cin, text))
    {
        if (text.empty()) break;
        if (text.find(' ') != std::string::npos)
        {
            size_t spacePos = text.find(" ");
            std::string freq1 = text.substr(0, spacePos);
            std::string freg2 = text.substr(spacePos + 1);

            std::cout << anagrams(freq1, freg2);
        }
    }
}