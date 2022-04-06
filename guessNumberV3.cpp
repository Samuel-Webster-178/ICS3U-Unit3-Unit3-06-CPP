// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on March 2022
// Allows user to guess number

#include <iostream>
#include <random>

int main() {
    // I check if the user guessed correctly
    std::string stringGuess;
    int intGuess;
    int chosenNumber;

    // input
    std::cout << "Guess a number between 0-9: ";
    std::cin >> stringGuess;

    // process
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    chosenNumber = idist(rgen);

    // process & output
    try {
        intGuess = std::stoi(stringGuess);
        if (intGuess == chosenNumber) {
           std::cout << "You got it!";
        } else {
           std::cout << "Maybe next time!";
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter an integer!";
    }
    std::cout << "\n\nDone." << std::endl;
}
