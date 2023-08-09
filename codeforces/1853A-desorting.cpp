// Desorting,

#include <bits/stdc++.h>

using namespace std;

bool not_sorted(vector<int> &v, int n);

int main()
{
  int t; cin >> t;
  while(t--)
  {
    int n; cin >> n;
    vector<int> v(n);
    for(int i {0}; i < n; i++) cin >> v[i];
    if(not_sorted(v, n))
    {
      cout << 0 << endl;
      continue;
    }
    // check the min difference between two elements of the array.
    // and then get the first element index.
    // 1 2 3 4 5 6 7;
    int min_move {INT_MAX};
    for(int i {1}; i <= n - 1; i++)
    {
      if((((v[i] - v[i - 1]) / 2) + 1) < min_move) min_move = ((v[i] - v[i - 1]) / 2) + 1;
      if(min_move == 1) break;
    }

    cout << min_move << endl;
  }
}

bool not_sorted(vector<int> &v, int n)
{
  for (int i = 1; i < n; i++)
  {
    if (v[i - 1] > v[i]) return true;
  }
  return false;
}