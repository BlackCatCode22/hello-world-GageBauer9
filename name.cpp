#include <iostream>
#include <string>

int main()
{
    std::string firstname;
    std::cout << "Greeting please type your first name: ";
    std::cin >> firstname;
    std::cout << "Nice to meet you " << firstname;

    return 0;
}