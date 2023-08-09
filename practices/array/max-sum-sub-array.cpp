#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> arr {1, 2, 3, 4}, c_sum;
  int n = arr.size();

  int sum_1 {0};
  for(int i {0}; i < arr.size(); i++)
  {
    sum_1 += arr[i];
    c_sum.push_back(sum_1);
  }

  for(const int &x: c_sum) cout << x << " ";
  cout << endl;

  int max_sum {INT_MIN};
  int left_idx {-1}, right_idx {-1};

  for(int i {0}; i < n; i++)
    for(int j {i}; j < n; j++)
    {
      int curr_sum {0};
      curr_sum = c_sum[j] - c_sum[i-1];
      if(curr_sum > max_sum)
      {
        max_sum = curr_sum;
        left_idx = i;
        right_idx = j;
      }
    }

  cout << max_sum << endl;
  for(int i {left_idx}; i <= right_idx; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}