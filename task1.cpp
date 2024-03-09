#include <iostream>
#include <map>
#include <string>
#include <vector>

void printConsoleAll(std::map<std::string, std::vector<std::string>>& phoneDirectory)
{
    for (std::map<std::string, std::vector<std::string>>::iterator it = phoneDirectory.begin(); it != phoneDirectory.end(); ++it)
    {
        std::cout << it->first << " ";
        for (const auto& number : it->second)
        {
            std::cout << number << " ";
        }
        std::cout << std::endl;
    }
}


void searchPhoneAbonent()
{
    std::map<std::string, std::vector<std::string>> phoneDirectory;

    std::string inputUs;
    while (std::getline(std::cin, inputUs))
    {
        if (inputUs.empty()) break;
        if (inputUs.find("-") != std::string::npos)
        {
            size_t spacePos = inputUs.find(" ");
            std::string phone = inputUs.substr(0, spacePos);
            std::string lastName = inputUs.substr(spacePos + 1);

            phoneDirectory[lastName].push_back(phone);
        }
        else
        {
            
        }

    }
}

void task1HW()
{
    searchPhoneAbonent();

}