// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: September 2019
// This function checks if the user guess the number 5

#include <iostream>

int main() {
    // This function checks if the user guess the number 5
    const int myanswer = 5;
     int guess;

    // input
    std::cout << "Guess what number I'm thinking of! (between 0 & 9)"
    << std::endl;
    std::cout << " " << std::endl;
    std::cout << "Enter your guess: ";
    std::cin >> guess;

    // process
    if (guess == myanswer) {
         // output
         std::cout << "" << std::endl;
         std::cout << "You are correct!" << std::endl;
    }
}
