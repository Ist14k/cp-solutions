// Grab the Candies,

#include <bits/stdc++.h>

using namespace std;

void do_test()
{
  int n; cin >> n;
  int m_total {0}, b_total {0};
  while(n--)
  {
    int x; cin >> x;
    if(x % 2 == 0) m_total += x;
    else b_total += x;
  }

  if(m_total > b_total) cout << "YES" << endl;
  else cout << "NO" << endl;
}

int main()
{
  int t; cin >> t;

  while(t--) do_test();

  return 0;
}