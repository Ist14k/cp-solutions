// Magnets
#include <iostream>

using namespace std;

int main()
{
  int n, group {0};
  cin >> n;
  string m, curr = "";
  for(int i {0}; i < n; i++){
    cin >> m;
    if(m != curr) group++;
    curr = m;
  }

  cout << group << endl;

  return 0;
}