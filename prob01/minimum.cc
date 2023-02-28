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
// put in the vector. The program then return the index
// of the smallest value in the vector.
//

#include "minimum.h"

int IndexOfMinimumElement(std::vector<double> &input) {
  // ==================== YOUR CODE HERE ====================
  // Find the index of the smallest element in the input
  // vector, and return it. If the input vector is empty,
  // return -1.
  // ========================================================
  int small_index{0};
  double min{input.at(0)};

  if (input.empty()) {
    return -1;
  }
  for (int i = 0; i < input.size(); i++) {
    if (input.at(i) < min) {
      min = input.at(i);
      small_index = i;
    }
  }
  return small_index;
}