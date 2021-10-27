// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Oct 2021
// This program finds the average of the user's marks using lists

#include <iostream>
#include <string>
#include <list>
#include <cmath>

float MarksAverage(std::list<int> marks) {
    // This function calculates the average mark
    float average = 0;
    int divide = 0;

    // Process
    for (int counter : marks) {
        average = average + counter;
        divide += 1;
    }

    average = average/divide;

    return average;
}

int main() {
    // This is the main function
    std::list<int> mark_list;
    std::string userMarksString;
    int userMarks;
    float average;

    std::cout << "Please enter 1 mark at a time. Enter -1 to end\n"
    << std::endl;

    while (true) {
        std::cout << "What is your mark? (as %): ";
        std::cin >> userMarksString;
        try {
            userMarks = std::stoi(userMarksString);
            if (userMarks > 0 && userMarks < 101) {
                mark_list.push_back(userMarks);
            } else if (userMarks == -1) {
                average = MarksAverage(mark_list);
                std::cout << "\nThe average is " << average << "%" <<std::endl;
                break;
            } else {
                std::cout << "\nInvalid Input." << std::endl;
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "\nInvalid Input." << std::endl;
            break;
        }
    }

    std::cout << "\nDone." << std::endl;
}
