#include "file_logger.hpp"
#include <fstream>
#include <iostream>

// Implement this:
FileLogger::FileLogger(std::string filename)
{
    // call open() when we construct the file logger
    // this is preferred to calling open() and close() each time we log something
    logfile.open(filename);
}

// Implement this:
void FileLogger::log(std::string msg)
{
    logfile << msg;
}

// Implement this:
FileLogger::~FileLogger()
{
    // closes the file when the logger is deconstructed
    // what if user deletes the logger object but keeps using calculator?
    logfile.close();
}