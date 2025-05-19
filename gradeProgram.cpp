// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: May 2025
// This program converts a number grade to a percentage using
// the calcMark(string level) function

#include <iostream>
#include <string>

int calcMark(std::string level) {
    // This function converts a grade level to a percentage
    if (level == "0") {
        return 25;
    } else if (level == "1-") {
        return 51;
    } else if (level == "1") {
        return 55;
    } else if (level == "1+") {
        return 58;
    } else if (level == "2-") {
        return 61;
    } else if (level == "2") {
        return 65;
    } else if (level == "2+") {
        return 68;
    } else if (level == "3-") {
        return 71;
    } else if (level == "3") {
        return 75;
    } else if (level == "3+") {
        return 78;
    } else if (level == "4-") {
        return 83;
    } else if (level == "4") {
        return 91;
    } else if (level == "4+") {
        return 98;
    } else {
        return -1;  // Invalid input
    }
}

int main() {
    std::string level;
    std::cout << "Enter the level (0 to 4+): ";
    std::cin >> level;

    int percentage = calcMark(level);

    if (percentage != -1) {
        std::cout << "The percentage for level "
                  << level << " is " << percentage << "%." << std::endl;
    } else {
        std::cout << "Invalid level entered." << std::endl;
    }

    return 0;
}
