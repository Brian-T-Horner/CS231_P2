// Helper Functions Implementation File
//
// Author: Brian Horner
// Edit History:
// 10/25/2021 Seperated funcs into specification and implementation files
// Move populate vector into specification and implementation


#include "helperFuncs.h"
#include <vector>
#include <cmath>
#include <iostream>
#include <iomanip>


void populateVector(std::vector<double>& vector){
    const int MaximumArrayIndex{99};
    std::cout << "Please start entering values in order to populate the array." <<std::endl;
    std::cout << "The maximum values that are allowed to be entered is 100." <<std::endl;
    std::cout << "In order to stop entering values please enter -1." <<std::endl;

    // vector populating loop - allows for 99 inputs of values
    for(int i{0}; i<= MaximumArrayIndex; i++){
        double tempVal{0.0};
        std::cout << "Enter the value: ";
        std::cin >> tempVal;
        // Check for sentinal value which will signal end of input
        if (tempVal != -1.0){
            vector.push_back(tempVal); // Add value to end of vector
        } else {
            break;
        }
    }

    std::cout << "Vector has finished being populated."<<std::endl;
}


double calcArrayAverage(const std::vector<double> &vector) {
    // Function for calculating an array's values average
    // Takes in a vector object and returns a double of the vectors average
    double arraySum{0};

    for (double item: vector){
        arraySum += item;
    }

    double arrayAverage = arraySum / static_cast<double>(vector.size());
    return arrayAverage;
}

double calcArraySTD(const std::vector<double>& vector){
    // Function for calculating a vectors values standard deviation
    // Take a vector object and returns the standard deviation of the elements
    double arraySum{0};

    for (double item: vector){
        arraySum += item;
    }

    double arrayAverage = arraySum / static_cast<double>(vector.size());

    double standardDeviation{0};

    for (double value: vector){
        standardDeviation += pow(value - arrayAverage, 2);
    }

    return sqrt(standardDeviation / static_cast<double>(vector.size()-1));
}


void outputArray(const std::vector<double>& vector){
    // Function for outputting vector values and index positions
    // Takes in a vector object and outputs to the console values and index positions
    std::cout << "Array Index" << std::setw(12) << "Value" <<std::endl;
    for (int i{0}; i < vector.size(); i++){
        std::cout <<std::setw(6) << i << std::setw(12) << vector[i] <<std::endl;
    }
}

