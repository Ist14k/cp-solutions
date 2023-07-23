// Collecting Coins,

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t; cin >> t;

  while(t--)
  {
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    int max_coin = max({a, b, c});

    int slack_a = max_coin - a;
    int slack_b = max_coin - b;
    int slack_c = max_coin - c;

    int left_coin = n - (slack_a + slack_b + slack_c);

    if(left_coin < 0) cout << "NO" << endl;
    else if(left_coin % 3 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}
