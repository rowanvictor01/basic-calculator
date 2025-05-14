#include <iostream>
#include "operations.h"
#include <iomanip>

int main () {
    std::cout << "Calculator Opened!\n" << std::endl;
    float x = 0, y = 0;
    char operation = 0;
    bool loop = true;
    while (loop) {

        std::cin >> x;
        validate(x);
        std::cin >> operation;
        std::cin >> y;
        validate(y);

        if (operation == '+') {
            float sum = add(x, y);
            std::cout << std::fixed << std::setprecision(3) << sum << '\n' << std::endl;
        }
        else if (operation == '-') {
            float difference = subtract(x, y);
            std::cout << std::fixed << std::setprecision(3) << difference << '\n' << std::endl;
        }
        else if (operation == '*') {
            float product = multiply(x, y);
            std::cout << std::fixed << std::setprecision(3) << product << '\n' << std::endl;
        }
        else if (operation == '/') {
            if (y == 0) {
                std::cout << "Error: Division by 0\n" << std::endl;
            }
            else {
                float quotient = divide(x, y);
                std::cout << std::fixed << std::setprecision(3) << quotient << '\n' << std::endl;
            }
        }
        else {
            std::cout << "Error: Invalid Operation\n" << std::endl;
        }

        std::cout << "Exit? (y/n):";
        char input;
        std::cin >> input;
        loop = checkReply(input);
    }
    std::cout << "Closing..." << std::endl;

    return 0;
}
