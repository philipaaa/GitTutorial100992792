#ifndef RGB_H
#define RGB_H

class RGB {
private:
    int red;
    int green;
    int blue;

public:
    RGB(); // default constructor
    RGB(int r, int g, int b); // custom constructor

    int getR() const;
    int getG() const;
    int getB() const;

    void setRed(int r);
    void setGreen(int g);
    void setBlue(int b);

    static RGB WHITE();
    static RGB BLACK();
    static RGB RED();
    static RGB GREEN();
    static RGB BLUE();

    void print() const;
};

#endif
