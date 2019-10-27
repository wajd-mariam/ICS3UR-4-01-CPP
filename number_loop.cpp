// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on:October 2019
// This program loops to get to the number entered and adds the numbers

#include <iostream>

main() {
    // variables
    int answer = 0;
    int counter = 0;
    int number;

    // input
    std::cout << "Enter a  number to loop it and add its results: ";
    std::cin >> number;

    // process & looping
    while (counter < number) {
        answer = answer + counter;
        counter = counter + 1;
    }
    std::cout << "The sum of all the numbers is " << answer;
}
