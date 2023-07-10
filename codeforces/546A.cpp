// Soldier and Bananas,
#include <iostream>

using namespace std;

int main()
{
  int k, n, w;
  cin >> k >> n >> w;

  int due = (w * (2 * k + (w - 1) * k)) / 2;

  if(due > n) cout << due - n;
  else cout << 0;

  return 0;
}