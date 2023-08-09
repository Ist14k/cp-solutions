#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> arr {-5, 4, 6, -3, 4 , -1};
  int max_sum {0}, curr_sum {0}, max_element {INT_MIN};

  for (size_t i = 0; i < arr.size(); i++)
  {
    curr_sum = max(curr_sum + arr[i], 0);
    max_sum = max(curr_sum, max_sum);
    max_element = max(max_element, arr[i]);
  }

  if(max_sum == 0) max_sum = max_element;
  
  cout << max_sum << endl;

  return 0;
}