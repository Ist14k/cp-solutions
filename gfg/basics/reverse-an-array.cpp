#include <bits/stdc++.h>

using namespace std;

int main() {
  int n {10};
  vector<int> arr(n);

  for(int i {0}; i < 10; i++) arr[i] = (i + 1) * 10;

  auto itr = arr.crbegin();

  while(itr != arr.crend()) {
    cout << *itr << " ";
    itr++;
  }

  return 0;
}