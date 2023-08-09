#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> arr {1, 2, 3, 4, 5, 6, 7, 8, 9}, c_sum;

  int curr_sum {0};

  for(int i {0}; i < arr.size(); i++)
  {
    curr_sum += arr[i];
    c_sum.push_back(curr_sum);
  }
  
  for(const int &x: c_sum) cout << x << " ";

  return 0;
}