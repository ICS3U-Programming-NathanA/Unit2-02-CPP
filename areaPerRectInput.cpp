// Copyright (c) 2021 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: Sept 22 2022
// This program asks the user for the length
// and width of a rectangle and calculates
// the area and perimeter with the given dimensions

#include <iostream>

    // declare variables
    float length,
    width, area, perimeter;

int main() {
    // get input from user
    std::cout << "Enter the length (mm): ";
    std::cin >> length;
    std::cout << "Enter the width (mm): ";
    std::cin >> width;

    // calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // display the results to the user
    std::cout << std::endl;
    std::cout << "The area is " << area << " mm^2.\n";
    std::cout << "The perimeter is " << perimeter << "mm.\n";
}
