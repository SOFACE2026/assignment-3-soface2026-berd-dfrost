#include "int_calculator.hpp"
#include "file_logger.hpp"
// File for sandboxing and trying out code

int main(int argc, char **argv)
{
    FileLogger logger("logfile.txt");
    IntCalculator calc(&logger);
    calc.sum(1,2);
    return 0;
}