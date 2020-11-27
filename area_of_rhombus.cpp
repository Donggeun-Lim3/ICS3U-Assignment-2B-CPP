// Copyright (C) 2002 Donggeun Lim All rights reserved
//
// Created by Donggeun Lim
// Created on November 2020
// This program calculates the area of rhombus

#include <iostream>

int main() {
    // this function calculates area
    int length;
    int width;
    int area;

    // input
    std::cout << "Enter length of the rhombus (mm):" << std::endl;
    std::cin >> length;
    std::cout << "Enter width of the rhombus (mm):" << std::endl;
    std::cin >> width;

    // process
    area = length*width/2;

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << "mm²" << std::endl;
}
