// using matrix transpose,
// time complexicity O(n^2),
// no extra spaces required,
// square matrix required,

#include <bits/stdc++.h>

using namespace std;

typedef vector<vector<int>> int_matrix;
typedef vector<vector<float>> float_matrix;
typedef vector<int> vec_int;
typedef vector<float> vec_float;

void create_matrix(int_matrix &matrix, int n);
void print_matrix(int_matrix &matrix, int n);
void transpose_matrix(int_matrix &matrix, int n);

int main()
{
  int n; cin >> n;
  int_matrix matrix(n, vec_int(n));

  cout << "initial matrix," << endl;
  create_matrix(matrix, n);
  print_matrix(matrix, n);

  cout << "transposed matrix," << endl;
  transpose_matrix(matrix, n);
  print_matrix(matrix, n);

  cout << "reversed of transposed matrix," << endl;
  for(int i {0}; i < n; i++)
    reverse(matrix[i].begin(), matrix[i].end());
  
  print_matrix(matrix, n);
  
  return 0;
}

// helper functions, -----------------------------------------

void create_matrix(int_matrix &matrix, int n)
{
  int count {1};
  for(int i {0}; i < n; i++){
    for(int j {0}; j < n; j++)
    {
      matrix[i][j] = count;
      count ++;
    }
  }
}

void print_matrix(int_matrix &matrix, int n)
{
  for(int i {0}; i < n; i++){
    for(int j {0}; j < n; j++)
    {
      cout << matrix[i][j] << " ";
    }

    cout << endl;
  }
}

void transpose_matrix(int_matrix &matrix, int n)
{
  for(int i {0}; i < n; i++)
    for(int j {i}; j < n; j++)
      swap(matrix[i][j], matrix[j][i]);
}