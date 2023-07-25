#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vec_int;

vector<vec_int> ans;
void permute(vec_int &a, int idx)
{
  if(idx == a.size())
  {
    ans.push_back(a);
    return;
  }

  for (size_t i = idx; i < a.size(); i++)
  {
    swap(a[i], a[idx]);
    permute(a, idx+1);
    swap(a[i], a[idx]);
  }
  return;
}

int main(int argc, char const *argv[])
{
  freopen("console.in", "r", stdin);
  freopen("console.out", "w", stdout);

  int n; cin >> n;
  vec_int a(n); for(auto &i: a) cin >> i;

  permute(a, 0);

  for(auto v: ans)
  {
    for(auto &i: v) cout << i << " ";
    cout << endl;
  }
  return 0;
}

/*
  Possible permutaions of a set is n!. Where n is the size of the array.
*/