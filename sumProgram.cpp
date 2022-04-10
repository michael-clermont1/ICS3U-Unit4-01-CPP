// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Feb 2022
// This program is a sum calculator

#include <iostream>
#include <string>

int main() {
    // this function how the sum is calculated
    std::string numberAsString;
    int numberAsInt;
    int loopCounter = 0;
    int sumNumber = 0;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> numberAsString;
    std::cout << "" << std::endl;

    // process & output
    try {
        numberAsInt = std::stoi(numberAsString);
        while (loopCounter <= numberAsInt) {
            sumNumber = sumNumber + loopCounter;
            loopCounter = loopCounter + 1;
        }
        std::cout << "The sum is " << sumNumber << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That is not an integer." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
