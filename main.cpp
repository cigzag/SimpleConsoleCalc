#include <iostream>

// simple function to check if string input is actually a number
// ref: https://stackoverflow.com/questions/21807658/check-if-the-input-is-a-number-or-string-in-c
bool isNumber(std::string input) {
    for (char c : input) {
        if (!isdigit(c)) {
            return false;
        }
    }

    return true;
}

int main() {
    int option = 0;
    std::string input;

    // let's use floats for working with decimals
    float num1, num2 = 0;

    for (;;) { // similar to while(true), meaning run forever until program exit.
        std::cout << "1. Addition" << "\n";
        std::cout << "2. Subtraction" << "\n";
        std::cout << "3. Multiplication" << "\n";
        std::cout << "4. Division" << "\n";
        std::cout << "Please select a calculator method: ";

        std::cin >> input;

        if(!isNumber(input))
            continue;

        option = std::stoi(input);

        if (option == 0 || option >> 4)
            continue;

        switch (option) {
            case 1: { // addition
                std::cout << "Enter first number: ";
                std::cin >> input;

                if(!isNumber(input))
                    continue;
                num1 = std::stoi(input);

                std::cout << "Enter second number: ";
                std::cin >> input;

                if(!isNumber(input))
                    continue;
                num2 = std::stoi(input);

                std::cout << "\nAdded number: " << num1 + num2 << "\n\n"; // Double new lines to provide readable spacing.
                continue;
            }
            case 2: { // subtraction
                std::cout << "Enter first number: ";
                std::cin >> input;

                if(!isNumber(input))
                    continue;
                num1 = std::stoi(input);

                std::cout << "Enter second number: ";
                std::cin >> input;

                if(!isNumber(input))
                    continue;
                num2 = std::stoi(input);

                std::cout << "\nSubtracted number: " << num1 - num2 << "\n\n";
                continue;
            }
            case 3: { // multiplication
                std::cout << "Enter first number: ";
                std::cin >> input;

                if(!isNumber(input))
                    continue;
                num1 = std::stoi(input);

                std::cout << "Enter second number: ";
                std::cin >> input;

                if(!isNumber(input))
                    continue;
                num2 = std::stoi(input);

                std::cout << "\nMultiplied number: " << num1 * num2 << "\n\n";

                continue;
            }
            case 4: { // division
                std::cout << "Enter first number: ";
                std::cin >> input;

                if(!isNumber(input))
                    continue;
                num1 = std::stoi(input);

                std::cout << "Enter second number: ";
                std::cin >> input;

                if(!isNumber(input))
                    continue;
                num2 = std::stoi(input);

                std::cout << "\nDivided number: " << num1 / num2 << "\n\n";
                continue;
            }
            default:
                break;
        }
    }
}
