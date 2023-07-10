#include <iostream>

using namespace std;

void print_matrix(int *matrix[], int r, int c)
{
  for(int i {0}; i < r; i++)
  {
    for(int j {0}; j < c; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int r {3}, c {4}, count {1};
  int *matrix[r]; // array of pointers;

  for(int i {0}; i < r; i++)
  {
    matrix[i] = new int[c];
    for(int j {0}; j < c; j++)
    {
      matrix[i][j] = count;
      count++;
    }
  }

  print_matrix(matrix, r, c);

  return 0;
}