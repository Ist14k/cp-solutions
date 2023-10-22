// Spiral Traversal,

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> int_vec;
typedef vector<bool> bool_vec;
typedef vector<vector<int>> int_matrix;
typedef vector<vector<bool>> bool_matrix;

int_vec spiral_traversal(int_matrix &m);

int main()
{
  
  return 0;
}

int_vec spiral_traversal(int_matrix &m)
{
  int r = m.size(), c = m[0].size();
  int_vec ans;

  if(r == 0) return ans;

  bool_matrix seen(r, bool_vec(c, false));
}