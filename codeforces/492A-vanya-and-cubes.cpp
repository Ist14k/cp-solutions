// Vanya and Cubes,

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int n; cin >> n;
  int total_cubes {0}, curr_cubes {1}, i {0}, count {2};

  while(true)
  {
    total_cubes += curr_cubes;
    if(total_cubes > n) break;
    i++;

    curr_cubes += count;
    count++;
  }

  cout << i << endl;
  
  return 0;
}
