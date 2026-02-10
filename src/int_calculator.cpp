#include <sstream> // Hint to how you should build the message.

#include "int_calculator.hpp"

// Constructor Injection
IntCalculator::IntCalculator(Logger *logger) : logger(logger) {}

// Implement this:
int IntCalculator::sum(int a, int b)
{
    int sum = a + b;

    std::ostringstream output;
    output << "taking the sum of: " << a << " and " << b << " which is " << sum << std::endl;
    logger->log(output.str());  // send the string to the logger, any type of logger
    
    return sum;
}

// Implement this:
int IntCalculator::multiply(int a, int b)
{
    int product = a * b;
    
    std::ostringstream output;
    output << "taking the product of: " << a << " and " << b << " which is " << product << std::endl;
    logger->log(output.str());  // send the string to the logger, any type of logger
    
    return product;
}