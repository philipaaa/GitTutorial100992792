#include "RGB.h"
#include <iostream>
using namespace std;

// Default constructor
RGB::RGB() : red(255), green(255), blue(255) {} // default to white

// Custom constructor
RGB::RGB(int r, int g, int b) : red(r), green(g), blue(b) {}

// Getters
int RGB::getR() const {
    return red;
}

int RGB::getG() const {
    return green;
}

int RGB::getB() const {
    return blue;
}

// Setters
void RGB::setRed(int r) {
    red = r;
}

void RGB::setGreen(int g) {
    green = g;
}

void RGB::setBlue(int b) {
    blue = b;
}

// Static functions
RGB RGB::WHITE() {
    return RGB(255, 255, 255);
}

RGB RGB::BLACK() {
    return RGB(0, 0, 0);
}

RGB RGB::RED() {
    return RGB(255, 0, 0);
}

RGB RGB::GREEN() {
    return RGB(0, 255, 0);
}

RGB RGB::BLUE() {
    return RGB(0, 0, 255);
}

// Print function
void RGB::print() const {
    cout << "RGB(" << red << ", " << green << ", " << blue << ")" << endl;
}
