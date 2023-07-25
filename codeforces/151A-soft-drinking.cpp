// Soft Drinking,

#include <bits/stdc++.h>

using namespace std;

/*
  n -> frinds num,
  k -> bottles num,
  l -> drinks amount in each bottle (ml),
  c -> limes amount,
  d -> slice num of each lime,
  p -> salt amount (gm),
  nl -> drink (ml) needed for make 1 toast,
  _ -> 1 slice need for make 1 toast,
  np -> salt (gm) needed for make 1 toast
*/

int main()
{
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int t1 {(k * l) / nl};
  int t2 {c * d};
  int t3 {p / np};

  cout << min({t1, t2, t3}) / n << endl;
  
  return 0;
}