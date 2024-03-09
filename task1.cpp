#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <cctype>

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
        
        if (std::isdigit(inputUs[0]))
        {
            if ((inputUs.find(' ') != std::string::npos && inputUs.find(' ') != inputUs.length() - 1))
            {
                size_t spacePos = inputUs.find(" ");
                std::string phone = inputUs.substr(0, spacePos);
                std::string lastName = inputUs.substr(spacePos + 1);

                phoneDirectory[lastName].push_back(phone);
            }
            else
            {
                for (const auto& entry : phoneDirectory)
                {
                    const std::vector<std::string>& numbers = entry.second;
                    if (std::find(numbers.begin(), numbers.end(), inputUs) != numbers.end())
                    {
                        std::cout << entry.first << std::endl;
                    }
                    else
                    {
                        std::cout << "Данные отсутствуют.";
                    }
                }
            }
        }
        else if (phoneDirectory.find(inputUs) != phoneDirectory.end())
        {
            std::cout << "тел: ";
            for (const auto& number : phoneDirectory[inputUs])
            {
                std::cout << number << " ";
            }
            std::cout << std::endl;
        } else
        {
            std::cout << "нет данных" << std::endl;
        }
        
        //printConsoleAll(phoneDirectory);
    }
}

void task1HW()
{
    searchPhoneAbonent();

}