#ifndef TAARRAY_H
#define TAARRAY_H

#include "TextArea.h"
#include "defs.h"
#include <string>

class TAArray {
private:
    TextArea** elements;
    int numElements;
    int capacity;

public:
    TAArray(int cap = MAX_COMPONENTS);
    ~TAArray();

    bool add(TextArea* ta);
    bool add(TextArea* ta, int index);

    TextArea* get(int index) const;
    TextArea* get(const std::string& id) const;

    TextArea* remove(int index);
    TextArea* remove(const std::string& id);

    int size() const;
    int getSize() const;
};

#endif
