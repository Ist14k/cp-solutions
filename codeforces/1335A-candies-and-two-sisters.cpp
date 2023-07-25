// Candies and Two Sisters,

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int t; cin >> t;

  while(t--)
  {
    int n; cin >> n;
    cout << (long long) ceil((double) n / 2) - 1 << endl;
  }
  
  return 0;
}
