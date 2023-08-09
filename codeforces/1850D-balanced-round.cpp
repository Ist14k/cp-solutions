// Balanced Round,

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t; cin >> t;
  while(t--)
  {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(int i {0}; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end()); // NLog(N)

    int big {0}, last {0};

    // 2 3 8 10 19
    // 1 3 5 12 12 17 17 20

    for(int i {0}; i < n - 1; i++) // N
    {      
      if(v[i+1] - v[i] > k)
      {
        int now {i + 1};
        big = max(big, now - last); // long range
        last = now; // current index
      }   
    }

    big = max(big, n - last);
    cout << n - big << endl;
  }

  return 0;
}