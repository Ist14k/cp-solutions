#include <bits/stdc++.h>

using namespace std;

void setConsole()
{
  freopen("shuffle.in", "r", stdin);
  freopen("shuffle.out", "w", stdout);
}

int main()
{
  setConsole();
  
  int n; cin >> n;

  vector<int> a(n), b(n), v(n);
  for(size_t i {0}; i < n; i++) cin >> a[i];
  for(size_t i {0}; i < n; i++) cin >> b[i];
  
  int TERM {3};
  while(TERM--)
  {
    for(int i {0}; i < n; i++)
    {
      v[i] = b[a[i] - 1];
    }

    b = v;
  }

  for(int &x: v) cout << x << endl;
  
  return 0;
}

