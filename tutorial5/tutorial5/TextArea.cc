#include "TextArea.h"
#include <iostream>
using namespace std;

// Default constructor
TextArea::TextArea()
    : text(""), id(""), fill(RGB::WHITE()), border(RGB::BLACK())
{
    dimensions.x = 0;
    dimensions.y = 0;
    dimensions.width = 0;
    dimensions.height = 0;
}

// Full constructor
TextArea::TextArea(int x, int y, int width, int height, const std::string& id, const std::string& text,
                   const RGB& fill, const RGB& border)
    : text(text), id(id), fill(fill), border(border)
{
    dimensions.x = x;
    dimensions.y = y;
    dimensions.width = width;
    dimensions.height = height;
}

TextArea::TextArea(const Rectangle& rect, const std::string& id, const std::string& text,
    const RGB& fill, const RGB& border)
: dimensions(rect), text(text), id(id), fill(fill), border(border)
{}



// Copy constructor (tutorial specific)
TextArea::TextArea(const TextArea& other)
    : id(other.id), fill(other.fill), border(other.border)
{
    dimensions = other.dimensions;
    text = "DUPLICATE";
}

// Getters
const Rectangle& TextArea::getDimensions() const {
    return dimensions;
}

const std::string& TextArea::getText() const {
    return text;
}

const std::string& TextArea::getId() const {
    return id;
}

const RGB& TextArea::getFill() const {
    return fill;
}

const RGB& TextArea::getBorder() const {
    return border;
}

// Setters
void TextArea::setDimensions(const Rectangle& rect) {
    dimensions = rect;
}

void TextArea::setText(const std::string& txt) {
    text = txt;
}

void TextArea::setId(const std::string& identifier) {
    id = identifier;
}

void TextArea::setFill(const RGB& fillColour) {
    fill = fillColour;
}

void TextArea::setBorder(const RGB& borderColour) {
    border = borderColour;
}

// Print
void TextArea::print() const {
    cout << "TextArea id: " << id << endl;
    cout << "Preferred location: " << dimensions.x << ", " << dimensions.y << endl;
    cout << "Size: " << dimensions.width << ", " << dimensions.height << endl;
    cout << "Text: " << text << endl;
}

// Overlaps
bool TextArea::overlaps(const TextArea& other) const {
    return dimensions.overlaps(other.dimensions);
}
