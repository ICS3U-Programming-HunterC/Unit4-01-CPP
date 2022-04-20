// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: April 19, 2022
// This program asks the user to enter a positive number
// and then uses a loop to calculate and display the sum 
// of all numbers from 0 until that number.


#include <iostream>
#include <string>


int main() {
    // declare variables
    std::string userInputString;
    int userInput;

    // initioaize the loop counter and sum
    int sum = 0;
    int loopNum = 0;

    // Get the user input as a string
    std::cout << "Enter a positive number: ";
    std::cin >> userInputString;
    std::cout << "\n";

    // calculate the sum of the numbers from 0 to the user input
    try {
        userInput = std::stoi(userInputString);

        if (userInput < 0) {
            std::cout << "That is a negative number";
            std::cout << "\n";
        }

        while (loopNum < userInput) {
            loopNum = loopNum + 1;
            std::cout << loopNum << " times through loop\n";

            sum = sum + loopNum;
        }
        std::cout << "\n";
        std::cout << "The total sum of the numbers from 0 to "
<< userInput << " is: " << sum;
    } catch (std::invalid_argument) {
        std::cout << "That is an invalid number! \n";
}
}
