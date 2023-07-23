// Floor Number,

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t; cin >> t;

  while(t--)
  {
    int n, x;
    cin >> n >> x;

    int z = ceil((float) (n - 2) / x);

    int floor_num = (z < 0 ? 0 : z) + 1;

    cout << floor_num << endl;
  }

  return 0;
}