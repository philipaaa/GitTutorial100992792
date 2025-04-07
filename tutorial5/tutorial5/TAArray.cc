#include "TAArray.h"

// Constructor
TAArray::TAArray(int cap) : capacity(cap), numElements(0) {
    elements = new TextArea*[capacity];
    for (int i = 0; i < capacity; ++i) {
        elements[i] = nullptr;
    }
}

// Destructor
TAArray::~TAArray() {
    for (int i = 0; i < numElements; ++i) {
        delete elements[i];
    }
    delete[] elements;
}

// Add to the back
bool TAArray::add(TextArea* ta) {
    if (numElements >= capacity) {
        return false;
    }
    elements[numElements++] = ta;
    return true;
}

// Add at a specific index
bool TAArray::add(TextArea* ta, int index) {
    if (numElements >= capacity || index < 0 || index > numElements) {
        return false;
    }
    for (int i = numElements; i > index; --i) {
        elements[i] = elements[i-1];
    }
    elements[index] = ta;
    ++numElements;
    return true;
}

// Get by index
TextArea* TAArray::get(int index) const {
    if (index < 0 || index >= numElements) {
        return nullptr;
    }
    return elements[index];
}

// Get by id
TextArea* TAArray::get(const std::string& id) const {
    for (int i = 0; i < numElements; ++i) {
        if (elements[i]->getId() == id) {
            return elements[i];
        }
    }
    return nullptr;
}

// Remove by index
TextArea* TAArray::remove(int index) {
    if (index < 0 || index >= numElements) {
        return nullptr;
    }
    TextArea* removed = elements[index];
    for (int i = index; i < numElements - 1; ++i) {
        elements[i] = elements[i+1];
    }
    elements[numElements-1] = nullptr;
    --numElements;
    return removed;
}

// Remove by id
TextArea* TAArray::remove(const std::string& id) {
    for (int i = 0; i < numElements; ++i) {
        if (elements[i]->getId() == id) {
            return remove(i);
        }
    }
    return nullptr;
}

// Get current size
int TAArray::size() const {
    return numElements;
}

// Get size (needed for test.cc)
int TAArray::getSize() const {
    return numElements;
}
