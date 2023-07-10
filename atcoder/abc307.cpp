// A Weekly Records,

#include <iostream>

using namespace std;

int main()
{
  int n; cin >> n;
  int count {0};
  int week {0};
  int total_steps[n] = {0};

  for(int i {1}; i <= n * 7; i++) {
    int s; cin >> s;
    total_steps[week] += s;
    count++;
    if(count == 7) {
      week++;
      count = 0;
    }
  }

  for(int &s: total_steps) {
    cout << s << " ";
  }

  return 0;
}

/*
s = n/2 * (2a + (n-1)d);
*/