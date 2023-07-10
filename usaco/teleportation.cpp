#include <bits/stdc++.h>

using namespace std;

int main()
{
	// freopen("teleport.in", "r", stdin);
	// freopen("teleport.out", "w", stdout);

	int a, b, x, y;

	cin >> a >> b >> x >> y;

	int c = abs(min(a, b) - min(x, y)) + abs(max(a, b) - max(x, y));
	cout << (c > abs(b - a) ? abs(b - a) : c);
}

