#include <iostream>

using namespace std;

int main()
{
  int r {2}, c {5}, count {1};
  int matrix[r][c];

  for(int i {0}; i < r; i++)
  {
    for(int j {0}; j < c; j++)
    {
      matrix[i][j] = count;
      count++;
    }
  }
  

  for(int i {0}; i < r; i++) 
  {
    for(int j {0}; j < c; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  

  return 0;
}