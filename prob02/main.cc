// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>
//
// Lab 5-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iomanip>
#include <iostream>

int main() {
  int num_students = 0;
  std::cout << "How many students are in your class? ";
  std::cin >> num_students;

  if (num_students <= 0) {
    std::cout << "You have no students!\n";
  } else {
    // ===================== YOUR CODE HERE =====================
    // Construct a vector whose size is the same as the
    // given number of students in the class, based on the
    // `num_students` variable. Don't forget to #include <vector>.
    // ==========================================================

    std::cout << "Enter the GPA for the students in your class (0.0 - 4.0)\n";
    for (int i = 0; i < num_students; i++) {
      // ============ YOUR CODE HERE ============
      // Store the input GPA from cin into
      // the corresponding index in the vector.
      // ========================================
      std::cout << "Enter the GPA for student #" << i + 1 << ": ";
    }
    double average = 0;

    // ===================== YOUR CODE HERE =====================
    // Call your CalculateAverage function and provide any
    // necessary parameters. Then, store the results in the average
    // variable. Make sure to #include "calculate_avg.h" before you
    // use the CalculateAverage function.
    // ==========================================================

    std::cout << "Class average: " << std::setprecision(2) << std::fixed
              << average << "\n";
  }

  return 0;
}
