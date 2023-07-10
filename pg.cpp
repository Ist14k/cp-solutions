#include <bits/stdc++.h>

using namespace std;

int main()
{
  tuple<int, int, int> t{1, 2, 3};
  int const i{1};
  cout << get<i>(t);

  return 0;
}
