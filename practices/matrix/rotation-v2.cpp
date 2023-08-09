// using vector,
// time complexicity O(n^2),
// space complexicity O(n^2),

#include <bits/stdc++.h>

using namespace std;

typedef vector<vector<int>> int_matrix;
typedef vector<int> vec_int;

void create_matrix(int_matrix &matrix, int n);
void print_matrix(int_matrix &matrix, int n);
int_matrix rotate_matrix(int_matrix &matrix, int n);

int main()
{
  int n; cin >> n;
  int_matrix matrix(n, vec_int(n));

  create_matrix(matrix, n);
  print_matrix(matrix, n);

  cout << endl;

  int_matrix rotated_matrix = rotate_matrix(matrix, n);
  print_matrix(rotated_matrix, n);

  return 0;
}

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

int_matrix rotate_matrix(int_matrix &matrix, int n)
{
  int_matrix r(n, vec_int(n));

  for(int i {0}; i < n; i++)
    for(int j {0}; j < n; j++)
      r[j][n-1-i] = matrix[i][j];

  return r;
}