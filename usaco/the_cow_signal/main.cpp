#include <bits/stdc++.h>

using namespace std;

int main()
{
  freopen("cowsignal.in", "r", stdin);
  freopen("cowsignal.out", "w", stdout);

  int m, n, k; cin >> m >> n >> k;

  vector<string> s(m);

  for(int i {0}; i < m; i++) cin >> s[i];

  for(string &x: s) cout << x << endl;

  return 0;
}