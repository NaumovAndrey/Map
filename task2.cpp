#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <set>

void task2HW()
{
    std::multiset<std::string> queue;

    std::string input;
    while (std::getline(std::cin, input))
    {
        if (input.empty()) break;
        
        if (input == "Next")
        {
            std::cout << *queue.begin();
            queue.erase(queue.begin());
        } else
        {
            queue.insert(input);
        }
    }
}