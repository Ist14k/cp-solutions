#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector <int> vec = {1, 2, 3, 4, 5, 6};
  vector <int>::iterator i = vec.begin();

  cout << &i << endl;

  return 0;
}