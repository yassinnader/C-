#include <string>

std::string even_or_odd(int number) 
{
    /* if (number % 2 == 0)
    {
    return "Even";
    }
    else 
    {
    return "Odd";
    } */
    return number % 2 == 0 ? "Even" : "Odd";
}