#include <bits/stdc++.h>

using namespace std;

int main()
{
  freopen("shell.in", "r", stdin);
  freopen("shell.out", "w", stdout);
  int n;
  cin >> n;

  vector<int> shell_pos(3); // 0, 1, 2

  for (int i{0}; i < 3; i++)
  {
    shell_pos[i] = i;
  }

  vector<int> counter(3); // 0, 0, 0

  for (int i{0}; i < n; i++)
  {
    int a, b, g; // 1, 2, 1
    cin >> a >> b >> g;
    a--, b--, g--; // 0, 1, 0

    swap(shell_pos[a], shell_pos[b]); // 1, 0, g = 1

    counter[shell_pos[g]]++;
  }

  cout << *max_element(counter.begin(), counter.end()) << endl;

  return 0;
}
