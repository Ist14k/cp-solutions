// Ten Words of Wisdom,

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int16_t t; cin >> t;
  while(t--)
  {
    int16_t n; cin >> n;
    vector<int16_t> v;
    while(n--)
    {
      int16_t a, b; cin >> a >> b;
      if(a > 10) v.push_back(0);
      else v.push_back(b);
    }

    cout << (max_element(v.begin(), v.end()) - v.begin()) + 1 << endl;
  }
}