// To My Critics,

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int16_t t; cin >> t;
  while(t--)
  {
    vector<int16_t> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end(), greater<>());
    bool possible {false};
    for(int16_t i {1}; i < 3; i++)
    {
      if(v[0] + v[i] >= 10)
      {
        possible = true;
        break;
      }
    }
    if(possible) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}