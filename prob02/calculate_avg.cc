// Brian Milian
// CPSC 121L-01
// 2023-02-21
// brianmilian@csu.fullerton.edu
// @brian-250
//
// Lab 5-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater
//
// This program prompts the user to enter the number
// of students in their class. Then the program asks
// the user to input the GPA of every student. The
// program finds the average of all the GPAs.
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
