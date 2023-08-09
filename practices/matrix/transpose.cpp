#include <bits/stdc++.h>

using namespace std;

typedef vector<vector<int>> int_matrix;
typedef vector<int> vec_int;

void create_matrix(int_matrix &matrix, int r, int c);
void print_matrix(int_matrix &matrix, int r, int c);
// int_matrix transpose_matrix(int_matrix &matrix, int r, int c);

int main()
{
  cout << "enter row and column respectively separated by a space," << endl;
  int r, c; cin >> r >> c;
  int_matrix matrix(r, vec_int(c));

  create_matrix(matrix, r, c);
  print_matrix(matrix, r, c);

  return 0;
}

void create_matrix(int_matrix &matrix, int r, int c)
{
  int count {1};
  for(int i {0}; i < r; i++){
    for(int j {0}; j < c; j++)
    {
      matrix[i][j] = count;
      count ++;
    }
  }
}

void print_matrix(int_matrix &matrix, int r, int c)
{
  for(int i {0}; i < r; i++){
    for(int j {0}; j < c; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

// int_matrix transpose_matrix(int_matrix &matrix, int r, int c)
// {
//   return;
// }