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

#include <vector>

double CalculateAverage(const std::vector<double> &student_grades) {
  // ================= YOUR CODE HERE =================
  // Compute and return the average grade
  // based on the input vector containing student GPAs.
  // Hint: you may want to use a range based loop!
  // ==================================================
  double size = student_grades.size();
  if (student_grades.empty()) {
    return 0;
  }

  double storer = 0.0;
  for (double i : student_grades) {
    storer = storer + i;
  }
  return storer / size;
}
