#include <bits/stdc++.h>

using namespace std;

void use_map();
void use_unordered_map();

int main() {
  use_unordered_map();
  return 0;
}

void use_map() {
  map<int, int> mp;

  mp.insert(pair<int, int> (1, 10));
  mp.insert(pair<int, int> (5, 50));
  mp.insert(pair<int, int> (2, 20));
  mp.insert(pair<int, int> (6, 60));
  mp.insert(pair<int, int> (3, 30));
  mp.insert(pair<int, int> (4, 40));
  mp[8] = 80;
  mp[7] = 70;

  map<int, int>::iterator itr {mp.begin()};

  while(itr != mp.end()) {
    cout << itr->first << " -> " << itr->second << endl;
    itr++;
  }
}

void use_unordered_map() {
  unordered_map<int, int> mp;

  mp.insert(pair<int, int> (1, 10));
  mp.insert(pair<int, int> (5, 50));
  mp.insert(pair<int, int> (2, 20));
  mp.insert(pair<int, int> (6, 60));
  mp.insert(pair<int, int> (3, 30));
  mp.insert(pair<int, int> (4, 40));
  mp[7] = 70;
  mp[8] = 80;

  unordered_map<int, int>::iterator itr {mp.begin()};

  while(itr != mp.end()) {
    cout << itr->first << " -> " << itr->second << endl;
    itr++;
  }
}