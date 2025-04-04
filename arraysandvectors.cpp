#include <iostream>
#include <vector>

using namespace std;

int main() {
    //declaring an array of 5 integers
    int myNum[5] = {10, 20, 30, 40, 50};
    
    // Printing original array
    cout << "Original Array: ";
    for (int i = 0; i < 5; i++) {
        cout << myNum[i] << " ";
    }
    cout << endl;
    
    // Modifying elements
    myNum[1] = 99;
    myNum[3] = 77;
    
    // Printing modified array
    cout << "Modified Array: ";
    for (int i = 0; i < 5; i++) {
        cout << myNum[i] << " ";
    }
    cout << endl;

    // Declaring a vector
    vector<int> numbers = {100, 200, 300};

    // Printing original vector
    cout << "\nOriginal Vector: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Adding an element to the end of the vector
    numbers.push_back(400);
    cout << "After push_back(400): ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Removing the last element from the vector
    numbers.pop_back();
    cout << "After pop_back(): "; 
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Printing current size of the vector
    cout << "Vector Size: " << numbers.size() << endl;

    // Removing all elements from the vector
    numbers.clear();
    cout << "After clear(): ";
    if (numbers.empty()) {
        cout << "Vector is empty." << endl;
    } else {
        cout << "Vector is not empty." << endl;
    }

    return 0;
}




