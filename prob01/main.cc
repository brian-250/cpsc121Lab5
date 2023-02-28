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

#include <iostream>
#include <vector>

#include "minimum.h"

int main() {
  // First, we ask the user what size vector they want to create.
  int size = 0;
  std::cout << "How many elements? ";
  std::cin >> size;
  if (size == 0) {
    return -1;
  }

  // Construct a vector of doubles with the given size.
  // This initializes all the elements in the vector to the
  // default value of double: 0.
  std::vector<double> numbers(size);
  for (int i = 0; i < size; i++) {
    // In every iteration of this for loop, we prompt the user
    // to input the element at index i, then we put value
    // into the vector at index i.
    double value = 0;
    std::cout << "Element " << i << ": ";
    std::cin >> value;
    numbers.at(i) = value;
  }

  // ==================== YOUR CODE HERE ====================
  // Call the IndexOfMinimumElement function and pass in
  // the `numbers` vector as input, and print out the index.
  // Don't forget to #include "minimum.h" so you can
  // make a call to the IndexOfMinimumElement declared there.
  // ========================================================

  int small_index{IndexOfMinimumElement(numbers)};
  std::cout << "The minimum value in your vector is at index " << small_index
            << "\n";
}