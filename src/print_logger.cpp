#include <iostream>

#include "print_logger.hpp"

void PrintLogger::log(std::string message)
{
    // very simple :)
    std::cout << message;
}