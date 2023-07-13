#include <bits/stdc++.h>

using namespace std;

int main()
{
  freopen("cowsignal.in", "r", stdin);
  freopen("cowsignal.out", "w", stdout);

  int m, n, k; cin >> m >> n >> k;

  vector<string> strs;

  while(m--)
  {
    string s; cin >> s;
    string s_2 {""};

    for(int i {0}; i < n; i++)
    {
      for(int j {0}; j < k; j++) s_2 += s[i];
    }

    for(int i {0}; i < k; i++) strs.push_back(s_2);
  }

  for(string &s: strs) cout << s << endl;

  return 0;
}