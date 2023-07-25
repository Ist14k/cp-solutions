// Spy Detected!

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t; cin >> t;

  while(t--)
  {
    int n, idx; cin >> n;
    vector<int> v(n);
    for(int i {0}; i < n; i++) cin >> v[i];

    for(int i {0}; i < n; i++)
    {
      int count {0};
      for(int j {0}; j < n; j++)
      {
        if(v[i] == v[j]) count++;
      }

      if(count == 1)
      {
        idx = i;
        break;
      }
    }
    cout << idx + 1 << endl;

  }
  return 0;
}