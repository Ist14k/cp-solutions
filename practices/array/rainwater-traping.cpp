#include <bits/stdc++.h>

using namespace std;

int solution_1(vector<int> &arr, int n);
int solution_2(vector<int> &arr, int n);

int main()
{
  // 12
  // 0 1 0 2 1 0 1 3 2 1 2 1
  int n; cin >> n;
  vector<int> arr(n);
  for(int &x: arr) cin >> x;

  cout << solution_2(arr, n) << endl;
  return 0;
}

int solution_2(vector<int> &arr, int n)
{
  int res {0};
  vector<int> left(n), right(n);

  // left -> 0 1 1 2 2 2 2 3 3 3 3 3
  // right -> 1 2 2 2 3 3 3 3 3 3 3 3
  
  left[0] = arr[0];
  for(int i {1}; i < n; i++) left[i] = max(left[i-1], arr[i]);
  right[n-1] = arr[n-1];
  for(int i {n-2}; i >= 0; i--) right[i] = max(right[i+1], arr[i]);

  for(int i {1}; i < n-1; i++)
  {
    int var = min(left[i-1], right[i+1]);
    if(var > arr[i]) res += var - arr[i];
  }

  return res;
}

int solution_1(vector<int> &arr, int n)
{
  int res {0};

  for(int i {1}; i < n-1; i++)
  {
    int left {arr[i]}, right{arr[i]};

    for(int j {0}; j < i; j++) left = max(left, arr[j]);
    for(int j {i+1}; j < n; j++) right = max(right, arr[j]);

    res += min(right, left) - arr[i];
  }

  return res;
}