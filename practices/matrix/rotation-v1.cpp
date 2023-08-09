// using array and pointer,
// time complexicity O(n^2),
// space complexicity O(n^2),

#include <bits/stdc++.h>

using namespace std;

void create_matrix(int *arr, int n);
void print_martix(int *arr, int n);

int main()
{
  int n, r; cin >> n >> r;
  int count {1};
  int m[n][n], f[n][n];

  create_matrix((int *)m, n);
  
  while(r--)
  {
    for(int i {0}; i < n; i++){
      for(int j {0}; j < n; j++)
      {
        f[j][n-1-i] = m[i][j];
      }
    }

    for(int i {0}; i < n; i++){
      for(int j {0}; j < n; j++)
      {
        m[i][j] = f[i][j];
      }
    }
  }
  
  print_martix((int *)f, n);

  return 0;
}

/*
  1 2 3    7 4 1
  4 5 6 -> 8 5 2
  7 8 9    9 6 3
*/

void create_matrix(int *arr, int n)
{
  int count {1};
  for(int i {0}; i < n; i++){
    for(int j {0}; j < n; j++)
    {
      *((arr+i*n) + j) = count;
      count++;
    }
  }
}

void print_martix(int *arr, int n)
{
  for(int i {0}; i < n; i++){
    for(int j {0}; j < n; j++)
    {
      cout << *((arr+i*n) + j) << " ";
    }
    cout << endl;
  }
}