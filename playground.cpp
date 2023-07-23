#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s {"abab"};

  int n = s.size() / 2;

  cout << (s.substr(0, n) == s.substr(n, n)) << endl;

  return 0;
}


