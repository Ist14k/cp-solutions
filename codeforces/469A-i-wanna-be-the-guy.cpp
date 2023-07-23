// I Wanna Be the Guy,

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int n; cin >> n;

  set<int> l;
  int lp, lq;
  
  cin >> lp;
  for (int i = 0; i < lp; i++)
  {
    int x; cin >> x;
    l.insert(x);
  }

  cin >> lq;
  for (int i = lp; i < lp + lq; i++)
  {
    int x; cin >> x;
    l.insert(x);
  }

  if(l.size() == n) cout << "I become the guy." << endl;
  else cout << "Oh, my keyboard!" << endl;

  return 0;
}
