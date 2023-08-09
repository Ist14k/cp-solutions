// Triple,

#include <bits/stdc++.h>

using namespace std;

void do_test()
{
  int n; cin >> n;
  vector<int> arr(n);
  for(auto &x: arr) cin >> x;
  sort(arr.begin(), arr.end());
  int count {1};
  for(int i {1}; i < n; i++)
  {
    if(arr[i - 1] == arr[i])
    {
      count++;
    }
    else{
      count = 1;
    }

    if(count == 3)
    {
      cout << arr[i] << endl;
      return;
    }
  }

  cout << -1 << endl;
}

int main()
{
  int t; cin >> t;

  while(t--) do_test();

  return 0;
}