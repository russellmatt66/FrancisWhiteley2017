#include <iostream>
#include <cmath>
#include <cassert>

/* Exercise 1.3 from "Guide to Scientific Computing in C++" */
// Take the scalar product of some vectors and their Euclidean norm and print it to the screen

int main(int argc, char* argv[])
{
  double array1[3] = {1.0, 2.0, 3.0};
  double array2[3] = {3.5, 4.5, 5.5};
  double result, norm1, norm2;
  // A for loop would be better suited for this task - book hasn't presented syntax yet
  result = array1[0] * array2[0] + array1[1] * array2[1] + array1[2] * array2[2];
  norm1 = array1[0] * array1[0] + array1[1] * array1[1] + array1[2] * array1[2];
  norm2 = array2[0] * array2[0] + array2[1] * array2[1] + array2[2] * array2[2];
  assert(norm1 >= 0.0);
  assert(norm2 >= 0.0);
  norm1 = sqrt(norm1);
  norm2 = sqrt(norm2);
  std::cout << "The scalar product of the arrays is " << result << "\n";
  std::cout << "The Euclidean norm of the first array is " << norm1 << "\n";
  std::cout << "The Euclidean norm of the second array is " << norm2 << "\n";

  return 0;
}

  


