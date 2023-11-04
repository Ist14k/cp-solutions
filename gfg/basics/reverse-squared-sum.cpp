#include <bits/stdc++.h>

using namespace std;

void do_test() {
  int n, sum {0}; cin >> n;
  vector<int> arr(n);
  for(int &x: arr) cin >> x;

  bool do_addition {true};
  
  for(auto itr = arr.rbegin(); itr != arr.rend(); itr++) {
    if(do_addition) sum += (*itr) * (*itr);
    else sum -= (*itr) * (*itr);

    do_addition = !do_addition;
  }

  cout << sum << endl;

}

int main()
{
  int t; cin >> t;

  while(t--) do_test();

  return 0;
}