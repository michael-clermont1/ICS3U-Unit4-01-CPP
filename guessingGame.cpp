// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Feb 2022
// This program calculates the price of a pizza
//    with diameter inputted by the user and HST

#include <iostream>

int main() {
    // this function calculates the area and perimeter inputted by user
    int numberFromUser;
    const int NUMBER = 4;

    // input
    std::cout << "Enter a number between 0-9: ";
    std::cin >> numberFromUser;
    std::cout << "" << std::endl;

    // process & output
    if (numberFromUser == NUMBER) {
        std::cout << "You guessed it correctly!";
    }
    if (numberFromUser != NUMBER) {
        std::cout << "You guessed it incorrectly!";
    }
    std::cout << "\nDone." << std::endl;
}
