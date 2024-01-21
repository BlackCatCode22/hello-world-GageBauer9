#include <iostream>

int main()
{
    std::cout << "Enter two numbers separted by a space to get sum: ";

    int x{};
    int y{};
    std::cin >> x >> y;

    std::cout << "The sum you have gotten is: " << x + y << '\n';

    return 0;
}