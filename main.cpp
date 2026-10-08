#include <iostream>
#include "DynamicArray.h"

int main() {
    std::cout << "\n--- Task 1: Basic Class ---\n";
    DynamicArray arr1(3);
    arr1.set(0, 10);
    arr1.set(1, 20);
    arr1.set(2, 30);
    
    std::cout << "Created arr1: ";
    arr1.print();
    std::cout << "\nGet arr1[1]: " << arr1.get(1) << "\n";


    std::cout << "\n--- Task 2: Copy Constructor ---\n";
    DynamicArray arr2(arr1);
    std::cout << "Created arr2 (copy): ";
    arr2.print();
    
    arr2.set(0, 99);
    std::cout << "\nModified arr2[0] to 99.\n";
    
    std::cout << "arr2 after change: ";
    arr2.print();
    std::cout << "\narr1 remains unchanged: ";
    arr1.print();
    std::cout << "\n";

    std::cout << "\n--- Task 3: Push Back ---\n";
    std::cout << "Adding valid value 40\n";
    arr1.push_back(40);
    std::cout << "arr1 after push_back: ";
    arr1.print();
    
    std::cout << "\nAttempting to add 150 (out of range):\n";
    arr1.push_back(150);


    std::cout << "\n--- Task 4: Add and Subtract ---\n";
    DynamicArray arr3(2);
    arr3.set(0, 5);
    arr3.set(1, 15);
    
    std::cout << "Original arr1: ";
    arr1.print();
    std::cout << "\nArray arr3: ";
    arr3.print();
    
    std::cout << "\nPerforming arr1 + arr3:\n";
    DynamicArray arrForAdd(arr1);
    arrForAdd.add(arr3);
    std::cout << "Result of addition: ";
    arrForAdd.print();
    
    std::cout << "\nPerforming arr1 - arr3:\n";
    DynamicArray arrForSub(arr1);
    arrForSub.subtract(arr3);
    std::cout << "Result of subtraction: ";
    arrForSub.print();
    
    std::cout << "\nOriginal arr1 (unchanged): ";
    arr1.print();

    return 0;
}