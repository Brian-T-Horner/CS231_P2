// Helper Function Specification File
//
// Author: Brian Horner
// Edit History:
// 10/25/2021 Seperated funcs into specification and implementation files

#ifndef helperFuncs_H
#define helperFuncs_H

#include <vector>


void populateVector(std::vector<double>& vector); // Populates vector with maximum 100 values
double calcArrayAverage(const std::vector<double>& vector); // Calculates average of provided vector returns value
double calcArraySTD(const std::vector<double>& vector); // Calculates STD of provided vector and returns value
void outputArray(const std::vector<double>& vector); // Outputs vector's values and their individual indexes in a table

#endif
