#include <bits/stdc++.h>

using namespace std;

void fill_allocated_vector(vector<int> &vec);
void fill_non_allocated_vector(vector<int> &vec, int size);
void use_iterators(vector<int> &vec);
void use_capacity(vector<int> &vec);
void use_modifiers(vector<int> &vec);

int main() {
  vector<int> vec;
  fill_non_allocated_vector(vec, 17);

  use_modifiers(vec);
  
  return 0;
}

void fill_non_allocated_vector(vector<int> &vec, int size) {
  for(int i {0}; i < size; i++) vec.push_back(i + 1);
}

void fill_allocated_vector(vector<int> &vec) {
  for(auto i {vec.begin()}; i != vec.end(); i++) cout << *i << " ";
}

void use_iterators(vector<int> &vec) {
  // pointer from beginning to end;
  for(auto i {vec.begin()}; i != vec.end(); i++) cout << *i << " ";
  cout << endl;

  // pointer from end to beginning;
  for(auto i {vec.rbegin()}; i != vec.rend(); i++) cout << *i << " ";
  cout << endl;
}

void use_capacity(vector<int> &vec) {
  cout << "Vectors Capacity: " << vec.capacity() << endl;
  cout << "Vectors Size: " << vec.size() << endl;
  cout << "Vectors Max Size: " << vec.max_size() << endl;
  vec.shrink_to_fit();
  cout << "Vectors Capacity: " << vec.capacity() << endl;
  cout << "Vector Is Empty: " << boolalpha << vec.empty() << endl;
}

void use_modifiers(vector<int> &vec) {
  auto it = vec.emplace(vec.begin(), 99);

  cout << *it << endl;
  cout << vec[0] << endl;
}