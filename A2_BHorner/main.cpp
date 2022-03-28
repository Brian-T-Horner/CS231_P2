// A program to manipulate an array and return calculations from the array
//
// Author: Brian Horner
// Edit History:
// 10/24/2021 Initial Version
// 10/25/2021 Clean up before submission, seperated funcs into specification and implementation

#include <iostream>
#include <vector>
#include "helperFuncs.h"


int main() {


    std::vector<double> values; // Declaring the vector with no fixed size

    populateVector(values); // Calling populate vector function

    std::cout << "\nVector's average is " << calcArrayAverage(values) <<"."<< std::endl;
    std::cout << "\nVector's standard deviation is " << calcArraySTD(values) << "."<<std::endl;
    std::cout << "Vector has a size of " << values.size() << "." <<std::endl;
    outputArray(values); // Outputting array values and indicies
}

