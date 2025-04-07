#include "File.h"
#include <iostream>

// Constructor
File::File(std::string name, std::string content, Date& date)
    : name(name), content(content), lastModified(date) {}

// lessThan function
bool File::lessThan(File& other) {
    return lastModified.lessThan(other.lastModified);
}

// print function
void File::print() {
    std::cout << "File Name: " << name << std::endl;
    std::cout << "Date Added: ";
    lastModified.print();
    std::cout << std::endl;
}

// printContents function
void File::printContents() {
    print();
    std::cout << "Content: " << content << std::endl;
}