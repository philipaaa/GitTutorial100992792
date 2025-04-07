#ifndef TEXTAREA_H
#define TEXTAREA_H

#include "defs.h"
#include "RGB.h"
#include <string>

class TextArea {
private:
    Rectangle dimensions;
    std::string text;
    std::string id;
    RGB fill;
    RGB border;

public:
    TextArea();  // default constructor

    TextArea(int x, int y, int width, int height, const std::string& id, const std::string& text,
             const RGB& fill = RGB::WHITE(), const RGB& border = RGB::BLACK());

    TextArea(const Rectangle& rect, const std::string& id, const std::string& text,
             const RGB& fill = RGB::WHITE(), const RGB& border = RGB::BLACK());  // 🆕 NEW CONSTRUCTOR

    TextArea(const TextArea& other); // copy constructor (tutorial version)

    // Getters...
    const Rectangle& getDimensions() const;
    const std::string& getText() const;
    const std::string& getId() const;
    const RGB& getFill() const;
    const RGB& getBorder() const;

    // Setters...
    void setDimensions(const Rectangle& rect);
    void setText(const std::string& txt);
    void setId(const std::string& identifier);
    void setFill(const RGB& fillColour);
    void setBorder(const RGB& borderColour);

    void print() const;
    bool overlaps(const TextArea& other) const;
};

#endif
