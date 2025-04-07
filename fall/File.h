#ifndef FILE_H
#define FILE_H

#include <string>
#include "Date.h"

class File {
public:
    // Constructor
    File(std::string name, std::string content, Date& date);

    // Member functions
    bool lessThan(File& other);
    void print();
    void printContents();

private:
    // Member variables
    std::string name;
    std::string content;
    Date lastModified;
};

#endif