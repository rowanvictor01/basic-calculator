#include "operations.h"
#include <iostream>
#include <limits>


float add(float& x, float& y) {
    return x + y;
}

float subtract(float& x, float& y) {
    return x - y;
}

float multiply(float& x, float& y) {
    return x * y;
}

float divide(float& x, float& y) {
    return x / y;
}


void validate(float& i) {
    while (true) {
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid Input. Try Again." << std::endl;
            std::cin >> i;
        }
        else {
            break;
        }
    }
}

bool checkReply(char& i) {
    tolower(i);
    while (true) {
        if (i != 'y' && i != 'n') {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid Input. Try Again." << std::endl;
            std::cin >> i;
        }
        else if (i == 'y') {
            return false;
        }
        else if (i == 'n') {
            std::cout << "Program Running..." << std::endl;
            return true;
        }
    }
}