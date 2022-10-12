// Copyright (c) 2022 Emmanuel All rights reserved
//
// Created by: Emmanuel
// Created on: Oct 2022
// This program calculates the Area of a pentagon
// with users input

#include <math.h>
#include <iostream>


int main() {
    // this function calculates the area and perimeter of Pentagon
    int side;
    float area;
    float perimeter

        // input
    ; std::cout << "Enter side length of the pentagon (cm): ";
    std::cin >> side;

    // process
    area = (sqrt(5 * (5 + 2 * (sqrt(5)))) * side * side) / 4;
    perimeter = (5 * side)

    // output
    ; std::cout << "Area of pentagon is " << area << "cm²." << std::endl;
    std::cout << "Perimeter of pentagon is " << perimeter << "cm." << std::endl;
    std::cout << "\nDone." << std::endl;
}
