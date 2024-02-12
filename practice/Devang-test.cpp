// galat hai sahi karna hai

#include <iostream>
#include <vector>

void spiralPrint(std::vector<std::vector<int>> &arr) {
  int rows = arr.size();
  int cols = arr[0].size();

  int sr = 0, sc = 0;

  while (sr <= rows && sc <= cols) {
    // starting row
    for (int i = sr; i < cols; i++) {
      std::cout << arr[sr][i] << ", ";
    }
    sr++;

    // ending column
    for (int i = sr; i < cols; i++) {
      std::cout << arr[i][cols - 1] << ", ";
    }
    cols--;

    // ending row
    for (int i = (cols - 1); i >= sc; i--) {
      std::cout << arr[rows - 1][i] << ", ";
    }
    rows--;

    // starting column
    for (int i = (rows - 1); i >= sr; i--) {
      std::cout << arr[i][sc] << ", ";
    }
    sc++;
  }
}

int main() {
  int rows, cols;

  std::cout << "enter no of rows: ";
  std::cin >> rows;

  std::cout << "enter no of cols: ";
  std::cin >> cols;

  std::vector<std::vector<int>> arr(rows, std::vector<int>(cols));
  std::cout << "enter the matrix:";

  for (int i = 0; i < rows; i++) {
    std::cout << "enter row " << i + 1 << ": \n";
    for (int j = 0; j < cols; j++) {
      std::cin >> arr[i][j];
    }
  }

  spiralPrint(arr);

  return 0;
}