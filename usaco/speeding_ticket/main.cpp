#include <bits/stdc++.h>

using namespace std;

int main()
{
  freopen("speeding.in", "r", stdin);
  freopen("speeding.out", "w", stdout);

  int n, m, pos{0}, ans {0};
  cin >> n >> m;

  vector<int> limits(100);
  for(int i {0}; i < n; i++)
  {
    int seg, lim; cin >> seg >> lim;
    
    while(seg--) limits[pos++] = lim;
  }

  pos = 0;

  for(int i {0}; i < m; i++)
  {
    int seg, speed; cin >> seg >> speed;

    while(seg--)
    {
      if(speed > limits[pos])
      {
        ans = max(ans, speed - limits[pos]);
      }
      pos++;
    }
  }

  cout << ans << endl;
  return 0;
}

