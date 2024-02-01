#include <iostream>

const float convert = 3.78533f;

int main()
{
    float input = 0;
    float result = 0;

    std::cin >> input;

    result = input * convert;

    std::cout << result << std::endl;

    return 0;
}