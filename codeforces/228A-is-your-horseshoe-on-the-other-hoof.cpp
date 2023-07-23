// Is your horseshoe on the other hoof?
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
  const int TERM {4};
  set<int> clrs;

  for (size_t i = 0; i < TERM; i++)
  {
    int c; cin >> c;
    clrs.insert(c);
  }

  cout << TERM - clrs.size() << endl;
  

  return 0;
}

