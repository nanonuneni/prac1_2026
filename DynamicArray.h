#pragma once
#include <iostream>


class DynamicArray {
private:
    int* data;
    size_t size;
public:
    void print() const;
    DynamicArray(size_t n);
    DynamicArray(const DynamicArray& other);
    ~DynamicArray();
    void set(size_t index, int value);
    int get(size_t index) const;
    void push_back(int value);
    void add(const DynamicArray& other);
    void subtract(const DynamicArray& other);
};