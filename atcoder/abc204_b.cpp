// Nuts,

#include <iostream>

using namespace std;

int main()
{
  int t, sum {0}; cin >> t;
  
  while(t--)
  {
    int n; cin >> n;
    if(n > 10) sum += (n - 10);
  }

  cout << sum << endl;

  return 0;
}