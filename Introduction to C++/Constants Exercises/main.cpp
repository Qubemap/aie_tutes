#include <iostream>

// 2

void ft_callme(int i)
{
    std::cout << "Call number " << i << std::endl;

    return;
}

int main()
{

    for (int i = 0; i < 10; i++)
    {
        ft_callme(i);
    }

    return 0;
}