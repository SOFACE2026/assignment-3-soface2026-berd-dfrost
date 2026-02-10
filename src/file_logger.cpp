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
    // this part is really confusing
    // just "logfile << msg;" would error in the test as "abcde" not "abcde\n"
    // "logfile << msg << std::endl;" also didn't work, maybe because it was "abcdef\r\n" instead of "abcdef\n"?
    // haven't done much C++ so not used to writing to files like this.
    logfile << msg << "\n";
    logfile.flush();
}

// Implement this:
FileLogger::~FileLogger()
{
    // closes the file when the logger is deconstructed
    // what if user deletes the logger object but keeps using calculator?
    logfile.close();
}