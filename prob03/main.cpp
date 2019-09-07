// This program calculates a person's height in feet (') and inches (").

#include <iostream>
int main()
{
    int height;
    int feet;
    int inches;
    std::cout << "How many feet tall? ";
    std::cin >> feet;
    std::cout << "How many inches tall?";
    std::cin >> inches;
    std::cout << "The person is "<< feet <<"' "<< inches <<"\" tall\n";

    return 0;
}
