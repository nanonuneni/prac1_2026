#include "DynamicArray.h"

void DynamicArray::print() const {
    for(size_t i = 0; i< size; i++){
        std::cout << data[i] << " ";
    }
}

DynamicArray::DynamicArray(size_t n){
    size = n;
    data = new int[size];
}

DynamicArray::~DynamicArray(){
    delete[] data;
}

void DynamicArray::set(size_t index, int value) {
    if (index >= size) {
        std::cerr << "Error: index out of range\n";
        return;
    }
    if (value < -100 || value > 100) {
        std::cerr << "Error: value must be in (-100,100)\n";
        return;
    }
    data[index] = value;
}

int DynamicArray::get(size_t index) const {
    if (index >= size) {
        std::cerr << "Error: index out of range\n";
        return 0;
    }
    return data[index];
}

DynamicArray::DynamicArray(const DynamicArray& other) {
    size = other.size;
    data = new int[size];
    for (size_t i = 0; i < size; ++i) {
        data[i] = other.data[i];
    }
}

void DynamicArray::push_back(int value) {
    if (value < -100 || value > 100) {
        std::cerr << "Error: value must be in (-100,100)\n";
        return;
    }

    int* newData = new int[size + 1];
    for (size_t i = 0; i < size; ++i) {
        newData[i] = data[i];
    }

    newData[size] = value;
    delete[] data;
    data = newData;
    size++;
}

void DynamicArray::add(const DynamicArray& other) {
    for (size_t i = 0; i < size; ++i) {
        int valB = (i < other.size) ? other.data[i] : 0;
        data[i] += valB;
    }
}

void DynamicArray::subtract(const DynamicArray& other) {
    for (size_t i = 0; i < size; ++i) {
        int valB = (i < other.size) ? other.data[i] : 0;
        data[i] -= valB;
    }
}