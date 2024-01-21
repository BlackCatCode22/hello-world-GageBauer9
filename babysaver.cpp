#include <iostream>

int main()
{
    std::cout << "Enter a number:";
    int x{};
    std::cin >> x;

    std::cout << "You have saved " << x * 2 << " babies" <<'\n';
    return 0;
}