// Brian Milian
// CPSC 121L-01
// 2023-02-21
// brianmilian@csu.fullerton.edu
// @brian-250
//
// Lab 5-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater
//
// This program prompts the user to enter the number of
// elements they want in a vector and the program
// allows them to choose three values they want to
// put in the vector. The program then returns the index
// of the smallest value in the vector.
//
#include "minimum.h"

#include <iostream>
#include <vector>

int IndexOfMinimumElement(std::vector<double> &input) {
  // ==================== YOUR CODE HERE ====================
  // Find the index of the smallest element in the input
  // vector, and return it. If the input vector is empty,
  // return -1.
  // ========================================================
  if (input.empty()) {
    return -1;
  }
  int small_index{0};
  double minimun_value{input.at(0)};
  for (int i = 1; i < input.size(); i++) {
    if (input.at(i) < minimun_value) {
      minimun_value = input.at(i);
      small_index = i;
    }
  }
  return small_index;
}