#pragma once

#include <sstream>
#include "logger.hpp"

template <typename T>
class TemplateCalculator
{
public:
    explicit TemplateCalculator(Logger *logger) : logger(logger)
    {
    }

    // literally a copypaste from int_calculator.cpp with "int" changed to "T"
    T sum(T a, T b)
    {
        T sum = a + b;

        std::ostringstream output;
        output << "taking the sum of: " << a << " and " << b << " which is " << sum << std::endl;
        logger->log(output.str());  // send the string to the logger, any type of logger
        
        return sum;
    }

    T multiply(T a, T b)
    {
        T product = a * b;
        
        std::ostringstream output;
        output << "taking the product of: " << a << " and " << b << " which is " << product << std::endl;
        logger->log(output.str());  // send the string to the logger, any type of logger
        
        return product;
    }

private:
    Logger *logger;
};