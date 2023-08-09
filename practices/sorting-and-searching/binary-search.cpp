#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> arr {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int l {0}, r {arr.size() - 1};
  int s {7};

  while(l <= r)
  {
    int m = l + (r - l) / 2;

    if(arr[m] == s)
    {
      cout << m << endl;
      break;
    }

    if(arr[m] < s) l = m + 1;
    else r = m - 1;
  }
  return 0;
}