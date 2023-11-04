#include <bits/stdc++.h>

using namespace std;

void use_map(vector<int> &vec);
void use_element_maping(vector<int> &vec, int n);

int main() {
  int n {10};
  vector<int> vec {10, 20, 20, 10, 10, 20, 5, 20, 5, 10};

  use_element_maping(vec, n);

  return 0;
}

void use_map(vector<int> &vec) {
  unordered_map<int, int> fq;

  for(vector<int>::iterator i = vec.begin(); i != vec.end(); i++) {
    if(fq.find(*i) != fq.end()) {
      fq[*i]++;
    }

    if(fq.find(*i) == fq.end()) {
      fq[*i] = 1;
    }
  }

  for(unordered_map<int, int>::iterator i = fq.begin(); i != fq.end(); i++) {
    cout << i->first << " " << i->second << endl;
  }
}

void use_element_maping(vector<int> &vec, int n) {
  vector<bool> visited(n, false);

  for(int i {0}; i < n; i++) {
    if(visited[i] == true) {
      continue;
    }

    visited[i] = true;
    int count {1};
    for(int j {i+1}; j < n; j++) {
      if(vec[i] == vec[j]) {
        visited[j] = true;
        count++;
      }
    }

    cout << vec[i] << " " << count << endl;
  }
}